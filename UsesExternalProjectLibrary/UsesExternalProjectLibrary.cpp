#include <iostream>
#include <ExternalProjectLibrary.h>

using namespace std;

int main(int argc, char *argv[])
{
	char sz[] = "Hello, World!";	//Hover mouse over "sz" while debugging to see its contents
	cout << sz << endl;	//<================= Put a breakpoint here
	Function1();
	return 0;
}