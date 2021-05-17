#include "Inheritance.h"

int mainInheri()
{
	/*CChild child;
	child.SetFamilyName("¿Ã");
	child.SetName("øµ»£");
	child.ShowFullName();*/
	CMyClass a;
	a.SetA(1);
	CMyClass b;
	b.SetA(1);
	return 0;
}

void CChild::SetName(string n)
{
	m_Name = n;
}

string CChild::GetName()
{
	return m_Name;
}

void CChild::ShowFullName()
{
	cout << GetFamilyName() << " " << m_Name << endl;
}

void CParent::SetFamilyName(string family)
{
	m_FamilyName = family;
}
