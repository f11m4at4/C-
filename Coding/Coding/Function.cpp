#include <iostream>
using namespace std;

int Plus(int number1, int number2)
{
	int result = number1 + number2;
	
	return result;
}

int Minus(int number1, int number2)
{
	int result = number1 - number2;

	return result;
}

int Mult(int number1, int number2)
{
	int result = number1 * number2;

	return result;
}

int Div(int number1, int number2)
{
	// number1 : 분자, number2 : 분모  
	// 분모가 0이라면 -1 을 사용자한테 반환해서 문제가 있다 라고 알려주고싶다.
	// 만약 number2 가 0이면 -1 을 리턴하자
	if (number2 == 0)
	{
		return -1;
	}
	int result = number1 / number2;

	return result;
}
int mainFunc()
{
	int result = Div(200, 0);
	
	// 만약 result 가 -1 이라면 0으로 잘못 나누었습니다. 를 출력
	if (result == -1)
	{
		cout << "0으로 잘못 나누었습니다." << endl;
		return 0;
	}
	// 그렇지 않으면 그냥 결과를 출력
	cout << result << endl;
	return 0;
}