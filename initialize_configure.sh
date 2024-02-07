#!/usr/bash

cd biu

# create fake files
cp -f Changelog NEWS || ([ ! -f "NEWS" ] && touch "NEWS")
cp -f README.md README || ([ ! -f "README" ] && touch "README")
cp -f LICENSE COPYING || ([ ! -f "COPYING" ] && touch "COPYING")
# run autotools
aclocal
automake -a
autoconf

cd ..

# create fake files
cp -f Changelog NEWS || ([ ! -f "NEWS" ] && touch "NEWS")
cp -f README.md README || ([ ! -f "README" ] && touch "README")
cp -f LICENSE COPYING || ([ ! -f "COPYING" ] && touch "COPYING")
# run autotools
aclocal
automake -a
autoconf
