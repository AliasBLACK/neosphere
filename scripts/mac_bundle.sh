#!/bin/bash
# Wrap a built neosphere executable, its bundled libs/ and game resources into a
# macOS .app bundle.
#
# A bare Mach-O is exec()'d directly, so on a Mac without Rosetta an
# x86_64-only build just fails with "Bad CPU type in executable".  Launching an
# .app goes through LaunchServices, which is what offers to install Rosetta.
#
# usage: mac_bundle.sh -n <name> -i <bundle id> -v <version> -e <executable>
#                      -l <libs dir> -o <out dir> [-c <icon.png>] [resource ...]
#
# Resources (e.g. game.spk, system/) end up in Contents/Resources, which is
# what ALLEGRO_RESOURCES_PATH (and therefore assets_path()) points at in a
# bundle.  Set CODESIGN_IDENTITY to sign with a real identity + hardened
# runtime; otherwise the bundle is ad-hoc signed.

set -euo pipefail

src_dir="$(cd "$(dirname "$0")/.." && pwd)"
icon="$src_dir/assets/system/icon.png"

while getopts "n:i:v:e:l:o:c:" opt; do
	case $opt in
		n) name=$OPTARG ;;
		i) bundle_id=$OPTARG ;;
		v) version=$OPTARG ;;
		e) executable=$OPTARG ;;
		l) libs_dir=$OPTARG ;;
		o) out_dir=$OPTARG ;;
		c) icon=$OPTARG ;;
		*) exit 1 ;;
	esac
done
shift $((OPTIND - 1))

: "${name:?-n missing}" "${bundle_id:?-i missing}" "${version:?-v missing}"
: "${executable:?-e missing}" "${libs_dir:?-l missing}" "${out_dir:?-o missing}"

app="$out_dir/$name.app"
exe_name="$(basename "$executable")"
archs="$(lipo -archs "$executable")"

echo "bundling $app ($archs)"
rm -rf "$app"
mkdir -p "$app/Contents/MacOS" "$app/Contents/Resources"

# the engine links against @executable_path/libs/
cp "$executable" "$app/Contents/MacOS/$exe_name"
cp -R "$libs_dir" "$app/Contents/MacOS/libs"

for res in "$@"; do
	cp -R "$res" "$app/Contents/Resources/"
done

arch_lines=""
for arch in $archs; do
	arch_lines+="		<string>$arch</string>"$'\n'
done
sed -e "s|@APP_NAME@|$name|g" \
    -e "s|@EXECUTABLE@|$exe_name|g" \
    -e "s|@BUNDLE_ID@|$bundle_id|g" \
    -e "s|@VERSION@|$version|g" \
    -e "/@ARCHS@/{
r /dev/stdin
d
}" \
    "$src_dir/desktop/macos/Info.plist.in" <<< "${arch_lines%$'\n'}" \
    > "$app/Contents/Info.plist"
plutil -lint "$app/Contents/Info.plist" >/dev/null
printf 'APPL????' > "$app/Contents/PkgInfo"

if [ -f "$icon" ]; then
	iconset="$(mktemp -d)/AppIcon.iconset"
	mkdir -p "$iconset"
	for size in 16 32 128 256 512; do
		sips -z $size $size "$icon" --out "$iconset/icon_${size}x${size}.png" >/dev/null
		sips -z $((size * 2)) $((size * 2)) "$icon" --out "$iconset/icon_${size}x${size}@2x.png" >/dev/null
	done
	iconutil -c icns "$iconset" -o "$app/Contents/Resources/AppIcon.icns"
	rm -rf "$(dirname "$iconset")"
fi

# every Mach-O in the bundle has to share the executable's architectures, or
# dyld fails at launch -- which also looks like a crash to the user
for lib in "$app"/Contents/MacOS/libs/*.dylib; do
	for arch in $archs; do
		if ! lipo "$lib" -verify_arch "$arch" 2>/dev/null; then
			echo "error: $(basename "$lib") has no $arch slice" >&2
			exit 1
		fi
	done
done

# sign inside-out: libs first, then the bundle itself
if [ -n "${CODESIGN_IDENTITY:-}" ]; then
	sign_args=(--force --timestamp --options runtime --sign "$CODESIGN_IDENTITY")
	codesign "${sign_args[@]}" "$app"/Contents/MacOS/libs/*.dylib
	codesign "${sign_args[@]}" --entitlements "$src_dir/desktop/macos/neosphere.entitlements" "$app"
else
	codesign --force --sign - "$app"/Contents/MacOS/libs/*.dylib
	codesign --force --sign - "$app"
fi
codesign --verify --strict --verbose=1 "$app"

case " $archs " in
	*" arm64 "*) ;;
	*) echo "note: no arm64 slice, Apple silicon Macs will run this under Rosetta" ;;
esac
