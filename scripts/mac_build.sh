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
dylibbundler -od -b -x ./neosphere -d ./libs -p @executable_path/libs
cp libsteam_api.dylib ./libs
