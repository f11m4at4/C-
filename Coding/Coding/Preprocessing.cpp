//#define TOINT

#include <iostream>
using namespace std;

#define PI 3.141592

#ifdef TOINT
int PPlus(int a, int b)
{
	return a + b;
}
#else
string PPlus(string a, string b)
{
	return a + b;
}
#endif // TOINT


#define MULTIPLY(x, y) ((x) * (y))
// MUL (1+1, 1+2) ((1+1)*(1+2)) => 
int mainPre()
{
	//int a = 10;
	//int b = 20;
	//int c = PPlus(a, b);
	string a = "Lee";
	string b = "Youngho";
	string c = PPlus(a, b);
	cout << c << endl;

	// 매크로함수
	cout << MULTIPLY(1+1, 1+2) << endl;
	return 0;
}