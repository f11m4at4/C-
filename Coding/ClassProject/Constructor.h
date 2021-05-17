#pragma once
#include <iostream>
using namespace std;

class CMyParent
{
public:
	CMyParent()
	{
		cout << "CMyParent()" << endl;
	}
	~CMyParent()
	{
		cout << "CMyParent() destructor" << endl;
	}
};

class CMyChild : public CMyParent
{
public:
	CMyChild()
	{
		cout << "CMyChild()" << endl;
	}

	~CMyChild()
	{
		cout << "CMyChild() destructor" << endl;
	}
};

class CMyTest
{
//[접근지정자:]
	//ClassName(ARGLIST, ...);
public:
	// 기본생성자 - Default constructor
	CMyTest() : m_Value(10), a(2)
	{
		cout << "CMyTest 생성자" << endl;
	}

	CMyTest(int a)
	{
		m_Value = a;
		cout << "CMyTest(int a) 생성자" << endl;
	}
	int a;
	int m_Value = 0;
//[접근지정자:]
	//~ClassName();
};

