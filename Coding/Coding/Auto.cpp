#include <iostream>
using namespace std;
int mainAuto()
{
	int a[] = { 0, 3, 4, 5, 6, 7, 8, 23, 23,234,234,23,2,42,23,42, 2,2,23,234,2, };
	auto c = 'c';
	cout << sizeof(a) / sizeof(int) << endl;
	cout << sizeof(c) << endl;
	return 0;
}