#include <iostream>
#include "ExampleProjectSharedLibrary.h"
#include "ExampleProjectStaticLibrary.h"

using namespace std;

int main(int argc, char *argv[])
{
	// From a static library.
	int result = StaticSum(1, 2);

	// From a dynamic library.
	cout << DynamicSum(1, 2) << endl;
	
	// From a dynamic library.
	PublicFunction();
	
	return 0;
}