#include <iostream>
using namespace std;

typedef struct STag
{
	const char* name;
	int age;
}SType;

int mainStruct()
{
	// ����ü�� ������
	SType woman;
	woman.name = "babo";
	woman.age = 11;
	
	SType* man = &woman;
	
	cout << man->age << ", " << man->name << endl;
	//cout << sizeof(woman) << endl;
	return 0;
}