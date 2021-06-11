#include "ExternalProjectLibrary.h"
#include "PrivateHeader.h"

/*
	To test the library, include "ExternalProject.h" from an application project
	and call ExternalProjectTest().
	
	Do not forget to add the library to Project Dependencies in Visual Studio.
*/

static int s_Test1 = 0;

int Function1()
{
	PrivateFunction1();

	return ++s_Test1;
}

static int s_Test2 = 0;

int PrivateFunction1()
{
	return ++s_Test2;
}