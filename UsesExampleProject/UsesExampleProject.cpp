#include <iostream>
#include <ExampleProject/ExampleProjectSharedLibrary.h>
#include <ExampleProject/ExampleProjectStaticLibrary.h>

using namespace std;

int main(int argc, char *argv[])
{
	int sharedSum = SharedSum(1, 2);
	int staticSum = StaticSum(2, 3);
	
	cout << "SharedSum = " << sharedSum << ", StaticSum = " << staticSum << endl;
	
	return 0;
}