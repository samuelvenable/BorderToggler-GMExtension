#!/bin/sh
cd "${0%/*}"
clang++ libdmxy.cpp -o libdmxy.dylib -framework CoreGraphics -arch x86_64 -arch arm64 -shared

