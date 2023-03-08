#!/usr/bash

cd biu

# create fake files
touch COPYING NEWS README
# run autotools
aclocal
automake -a
autoconf

cd ..

# create fake files
touch COPYING NEWS README
# run autotools
aclocal
automake -a
autoconf
