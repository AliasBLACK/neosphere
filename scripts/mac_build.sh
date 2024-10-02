#!/bin/bash

#Remember to install allegro
#brew install allegro

make clean; make && cp -R bin/* ../Glyphica
cd ../Glyphica
dylibbundler -od -b -x ./neosphere -d ./libs -p @executable_path/libs
zip -r glyphica_intel_mac.zip neosphere libs libsteam_api.dylib