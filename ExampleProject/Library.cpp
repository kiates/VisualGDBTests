#include "PrivateHeader.h"
#include "PublicHeader.h"
 
#ifdef USING_CMAKE_LIBRARY_DEMO
#error This should not happen
#endif
 
void PublicFunction()
{
	printf("Hello from PublicFunction()\n");
	PrivateFunction();
}