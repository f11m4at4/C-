#include "CTest.h"
#include <iostream>
using namespace std;

int mainTest()
{
	// 1. Ŭ���� �����ϱ�
	// Type varName;
	CTest t;
	// 2. Ŭ���� �ɹ��� �����ϱ�
	// - ���� ������ . �� �̿��Ѵ�.
	// - �ɹ��� �����ϱ� ���ؼ��� ���������ڰ� ���� �����Ѱ����� �����Ǿ�� �Ѵ�.
	t.SetNumber1(20);
	// 3. Ŭ���� �ɹ��� �����ϱ� 2
	// - ���� ������ -> �� �̿��Ѵ�.
	CTest* pT = &t;
	pT->SetNumber1(200);
	cout << pT->GetNumber1() << endl;
	return 0;
}

// �����Լ�
void Test()
{

}
// �ܺ�����(����)
void CTest::SetNumber1(int value)
{
	number1 = value * 0.01;
}

int CTest::GetNumber1()
{
	return number1 * 100;
}
