#include <iostream>
using namespace std;

typedef struct STag
{
	const char* name;
	int age;
}SType;

int mainStruct()
{
	// 구조체를 만들어보자
	SType woman;
	woman.name = "babo";
	woman.age = 11;
	
	SType* man = &woman;
	
	cout << man->age << ", " << man->name << endl;
	//cout << sizeof(woman) << endl;
	return 0;
}