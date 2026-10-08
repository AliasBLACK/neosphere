#!/bin/bash
# Build neosphere and package a game as a zipped .app, ready to upload.
#
# usage: mac_package.sh [options]
#   -g <dir>      game directory          (default: ../Glyphica next to neosphere)
#   -n <name>     app name                (default: Glyphica)
#   -i <id>       bundle identifier       (default: com.aliasblack.glyphica)
#   -v <version>  bundle version          (default: today, YYYY.M.D)
#   -p <spk>      game package            (default: the one .spk in the game dir,
#                                          if any; "none" to leave it out)
#   -o <dir>      where the .app goes     (default: <game dir>/mac_dist)
#   -z <zip>      output zip              (default: <game dir>/<name>_mac.zip)
#   -s            skip the build, bundle what's already in the game dir
#
# The defaults can also be set from the environment: GAME_DIR, APP_NAME,
# BUNDLE_ID, APP_VERSION, SPK, OUT_DIR and OUT_ZIP, e.g.
#   GAME_DIR=../OtherGame APP_NAME=Other mac_package.sh

set -euo pipefail

src_dir="$(cd "$(dirname "$0")/.." && pwd)"

game_dir="${GAME_DIR:-$src_dir/../Glyphica}"
app_name="${APP_NAME:-Glyphica}"
bundle_id="${BUNDLE_ID:-com.aliasblack.glyphica}"
# CFBundleShortVersionString wants up to three integers, so no engine-style
# "5.9.2+"; a date matches the game's own versionString
version="${APP_VERSION:-$(date +%Y.%-m.%-d)}"
spk="${SPK:-}"
out_dir="${OUT_DIR:-}"
zip="${OUT_ZIP:-}"
skip_build=false

while getopts "g:n:i:v:p:o:z:s" opt; do
	case $opt in
		g) game_dir=$OPTARG ;;
		n) app_name=$OPTARG ;;
		i) bundle_id=$OPTARG ;;
		v) version=$OPTARG ;;
		p) spk=$OPTARG ;;
		o) out_dir=$OPTARG ;;
		z) zip=$OPTARG ;;
		s) skip_build=true ;;
		*) sed -n '2,17p' "$0" >&2; exit 1 ;;
	esac
done

game_dir="$(cd "$game_dir" && pwd)"
out_dir="${out_dir:-$game_dir/mac_dist}"
zip="${zip:-$game_dir/${app_name}_mac.zip}"

if [ -z "$spk" ]; then
	# the engine only autoloads an .spk when it's the only one, so more than
	# one is ambiguous.  none is fine: the app is built empty and the .spk can
	# be dropped into Contents/Resources later, no re-signing needed
	shopt -s nullglob
	spks=("$game_dir"/*.spk)
	shopt -u nullglob
	if [ ${#spks[@]} -gt 1 ]; then
		echo "error: found ${#spks[@]} .spk files in $game_dir; pass -p <spk> or -p none" >&2
		exit 1
	fi
	spk="${spks[0]:-none}"
fi

if ! $skip_build; then
	"$src_dir/scripts/mac_build.sh" "$game_dir"
fi

resources=()
[ "$spk" != none ] && resources+=("$spk")
for res in system licenses; do
	[ -e "$game_dir/$res" ] && resources+=("$game_dir/$res")
done
icon="$game_dir/system/icon.png"
[ -f "$icon" ] || icon="$src_dir/assets/system/icon.png"

# ship an .app, not the bare executable: only LaunchServices offers to install
# Rosetta, a bare x86_64 binary just fails to exec on Apple silicon without it
mkdir -p "$out_dir"
"$src_dir/scripts/mac_bundle.sh" \
	-n "$app_name" -i "$bundle_id" -v "$version" \
	-e "$game_dir/neosphere" -l "$game_dir/libs" -c "$icon" -o "$out_dir" \
	${resources[@]+"${resources[@]}"}

# no resource forks/xattrs: they'd end up as a __MACOSX/ folder of ._ files
# that non-Mac unzippers show, and the code signatures are embedded in the
# binaries anyway
rm -f "$zip"
ditto -c -k --norsrc --noextattr --noacl --keepParent "$out_dir/$app_name.app" "$zip"

echo
echo "app:     $out_dir/$app_name.app"
echo "zip:     $zip"
echo "id:      $bundle_id $version"
echo "archs:   $(lipo -archs "$out_dir/$app_name.app/Contents/MacOS/neosphere")"
if [ "$spk" = none ]; then
	echo "spk:     none, add one to $app_name.app/Contents/Resources/ before shipping"
else
	echo "spk:     $(basename "$spk")"
fi
