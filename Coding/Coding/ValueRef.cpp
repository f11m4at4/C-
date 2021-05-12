#include <iostream>
using namespace std;


typedef struct  
{
	char data[1000000000];
}CMyData;

void Swap(int& pa, int& pb, const int& pc)
{
	int temp = pa;
	pa = pb;
	pb = pc;
}

void Load(const CMyData& d)
{
	
}

int mainVR()
{
	// call by value, call by reference
	
	int a = 10;
	int b = 20;
	int c = 30;

	Swap(a, b, c);


	CMyData d;
	Load(d);

	cout << "a : " << a << ", b : " << b << endl;
	return 0;
}