#pragma once
#include <iostream>
using namespace std;

class CParent
{
public:
	void SetFamilyName(string family);
	
	string GetFamilyName()
	{
		return m_FamilyName;
	}
	
private:
	string m_FamilyName;
};

class CChild : public CParent
{
private:
	string m_Name;

public:
	void SetName(string n);
	string GetName();
	void ShowFullName();
};


class CMyClass
{
public:
	int a;
	void SetA(int d)
	{
		this->a = d;
	}
};


