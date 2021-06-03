#include "ExternalProjectLibrary.h"

/*
	To test the library, include "ExternalProject.h" from an application project
	and call ExternalProjectTest().
	
	Do not forget to add the library to Project Dependencies in Visual Studio.
*/

static int s_Test = 0;

int Function1()
{
	return ++s_Test;
}