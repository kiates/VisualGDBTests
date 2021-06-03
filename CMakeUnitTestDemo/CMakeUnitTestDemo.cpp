#include <iostream>
#include "Sum.h"
#include "static-sum.h"
#include "PublicHeader.h"

#ifndef USING_CMAKE_LIBRARY_DEMO
#error CMakeLibraryDemo is missing
#endif 

using namespace std;

int main(int argc, char *argv[])
{
	// From a static library.
	StaticLibraryFunction();

	// From a dynamic library.
	cout << sum(1, 2) << endl;
	
	// From a dynamic library.
	PublicFunction();
	
	return 0;
}