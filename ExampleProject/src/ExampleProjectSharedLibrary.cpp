#include "PrivateHeader.h"
#include "ExampleProjectSharedLibrary.h"
 
void PublicFunction()
{
	printf("Hello from PublicFunction()\n");
	PrivateFunction();
}

int DynamicSum(int a, int b)
{
	return a + b;
}
