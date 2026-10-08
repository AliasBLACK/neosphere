#!/bin/bash
# Build neosphere and copy it, with its dylibs in libs/, into a game directory.
# Use mac_package.sh to also bundle it into a shippable .app.
#
# usage: mac_build.sh [game dir]    (default: ../Glyphica next to neosphere)

#Remember to install allegro
#brew install allegro

set -euo pipefail

src_dir="$(cd "$(dirname "$0")/.." && pwd)"
game_dir="$(cd "${1:-$src_dir/../Glyphica}" && pwd)"

cd "$src_dir"
make clean; make
cp -R bin/* "$game_dir"

cd "$game_dir"

# dylibbundler from Intel Homebrew runs under Rosetta, so the /usr/bin/otool
# and install_name_tool shims it calls start as x86_64 too, and xcrun dies on
# the arm64-only libxcrun in newer Command Line Tools ("Cannot find file
# ./neosphere").  resolve the real tools here and put them first on PATH
tools_dir="$(mktemp -d)"
trap 'rm -rf "$tools_dir"' EXIT
for tool in otool install_name_tool; do
	ln -s "$(xcrun --find "$tool")" "$tools_dir/$tool"
done
# ChakraCore is linked as @rpath/libChakraCore.dylib, so tell dylibbundler
# where it is.  it asks on stdin for any library it can't find and loops
# forever at EOF, so answer "quit" to make that a hard error instead
PATH="$tools_dir:$PATH" dylibbundler -od -b -x ./neosphere -d ./libs \
	-p @executable_path/libs -s "$src_dir/dep/lib" < <(yes quit)
cp libsteam_api.dylib ./libs
