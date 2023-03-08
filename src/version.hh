#ifndef VERSION_HH_IN_
#define VERSION_HH_IN_

#define BIN_PACKAGE_NAME "LatPack"
#define BIN_PACKAGE_VERSION "1.9.1"

#include <iostream>

void
giveVersion()
{
	std::cout	<<"\n " <<BIN_PACKAGE_NAME <<" package version " <<BIN_PACKAGE_VERSION 
				<<"\n"
				<<std::endl;
}

#endif /*VERSION_HH_IN_*/
