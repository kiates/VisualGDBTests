#include <stdio.h>
#include <iostream>
#include <ExternalProjectLibrary.h>

#ifdef USING_CMAKE_LIBRARY_DEMO
#include "PublicHeader.h"
#endif 
 
int main(int argc, char *argv[])
{
#ifdef USING_CMAKE_LIBRARY_DEMO
	PublicFunction();
#else
	printf("Compiled without CMakeLibraryDemo\n");
#endif 
	
	auto value = Function1();
	std::cout << value << std::endl;
}
