#!/bin/bash

#Remember to install allegro
#brew install allegro

set -e

make clean; make && cp -R bin/* ../Glyphica
version=$(cat VERSION)
cd ../Glyphica
dylibbundler -od -b -x ./neosphere -d ./libs -p @executable_path/libs
cp libsteam_api.dylib ./libs

# ship an .app, not the bare executable: only LaunchServices offers to install
# Rosetta, a bare x86_64 binary just fails to exec on Apple silicon without it
rm -rf mac_dist
mkdir mac_dist
../neosphere/scripts/mac_bundle.sh \
	-n Glyphica -i com.aliasblack.glyphica -v "$version" \
	-e ./neosphere -l ./libs -c ./system/icon.png -o mac_dist \
	glyphica.spk system licenses
rm -f glyphica_intel_mac.zip
ditto -c -k --sequesterRsrc --keepParent mac_dist/Glyphica.app glyphica_intel_mac.zip
