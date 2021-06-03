#include <stdio.h>
 
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
}
