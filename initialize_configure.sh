#!/usr/bash

cd biu

# create fake files
cp -f Changelog NEWS 
cp -f README.md README
cp -f LICENSE COPYING
# run autotools
aclocal
automake -a
autoconf

cd ..

# create fake files
cp -f Changelog NEWS 
cp -f README.md README
cp -f LICENSE COPYING
# run autotools
aclocal
automake -a
autoconf
