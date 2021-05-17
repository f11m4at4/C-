#include <iostream>
using namespace std;

int NewPlus(int a, int b)
{
	return a + b;
}
string NewPlus(string a, string b)
{
	return a + b;
}
int mainOverload()
{
	string a = "a";
	string b = "b";
	string result = NewPlus(a, b);

	cout << result << endl;

	int c = 10;
	int d = 20;
	int r = NewPlus(c, d);
	cout << r << endl;

	return 0;
}
