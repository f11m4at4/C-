#include <iostream>
using namespace std;

int mainArray()
{
	// type 이름[개수] = 값;
	// 정수 8개를 갖고있는 배열을 만들자
	int arr1[8] = { 1, 2, 3, 5, 4, 6, 7 };
	int arr2[] = { 2, 3, 4 };
	// 가져오기 : 변수이름[index]
	
	//arr1 에서 홀수인 녀석의 인덱스를 출력해 보자
	// for(초기값설정 ; 조건식 ; 증감분)
	for (int i = 0; i < 8; i++)
	{
		// 1. arr1 의 값이 홀수니까
		// -> 만약 arr1 의 i 번째 요소가 홀수 라면
		if (arr1[i] % 2 == 1)
		{
			// 2. 인덱스를 출력하고 싶다.
			cout << "홀수는 : " << i << endl;
		}
	}

	//char c[4] = "C++";
	//char c[4];// = { 'C', '+', '+', '\0' };
	char c[4] = "C++";
	
	c[0] = 'C';
	c[1] = '+';
	c[2] = '+';
	c[3] = '\0';

	cout << c << endl;
	return 0;
}