#include <iostream>
using namespace std;

void PrintB();
void PrintHelloWorld(bool isPrint);

int mainDeclare()
{
	PrintB();

	return 0;
}

void PrintB()
{
	cout << "PrintB" << endl;
	PrintHelloWorld(false);
}

void PrintHelloWorld(bool isPrint)
{
	cout << "Hello World" << endl;
	if (isPrint)
	{
		PrintB();
	}
}
