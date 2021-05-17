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
//[����������:]
	//ClassName(ARGLIST, ...);
public:
	// �⺻������ - Default constructor
	CMyTest() : m_Value(10), a(2)
	{
		cout << "CMyTest ������" << endl;
	}

	CMyTest(int a)
	{
		m_Value = a;
		cout << "CMyTest(int a) ������" << endl;
	}
	int a;
	int m_Value = 0;
//[����������:]
	//~ClassName();
};

