#include <iostream>
using namespace std;

int a = 10;
// 기본인자
float Plus(float n1 = 1, float n2 = 20)
{
	return n1 + n2;
}

void Test()
{
	a = 20;
}

int* AAA()
{
	int a = 20;
	return &a;
}

int mainDefault()
{
	float r = Plus(10);
	cout << r << endl;
	
	Test();
	cout << a << endl;

	const int* c = AAA();
	return 0;
}