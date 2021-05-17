#include "CTest.h"
#include <iostream>
using namespace std;

int mainTest()
{
	// 1. 클래스 선언하기
	// Type varName;
	CTest t;
	// 2. 클래스 맴버에 접근하기
	// - 직접 접근자 . 을 이용한다.
	// - 맴버에 접근하기 위해서는 접근지시자가 접근 가능한것으로 설정되어야 한다.
	t.SetNumber1(20);
	// 3. 클래스 맴버에 접근하기 2
	// - 간접 접근자 -> 을 이용한다.
	CTest* pT = &t;
	pT->SetNumber1(200);
	cout << pT->GetNumber1() << endl;
	return 0;
}

// 전역함수
void Test()
{

}
// 외부정의(구현)
void CTest::SetNumber1(int value)
{
	number1 = value * 0.01;
}

int CTest::GetNumber1()
{
	return number1 * 100;
}
