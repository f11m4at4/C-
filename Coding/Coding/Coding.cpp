#include <iostream>
using namespace std;

int mainFor()
{
	// 1 부터 100 계속 더한 결과를 출력하고 싶다.
	
	int sum = 0;
	// 2. 초기 0 값을 1과 더한다.
	//sum = sum + 1;
	//sum += 1;
	//sum++;
	// 3. 그 결과 값을 2와 더한다.
	//sum += 2;
	// 4. 그 결과 값을 3과 더한다.
	//sum += 3;
	// 5. 그 결과 값을 4와 더한다.
	//sum += 4;
	int a = 2;
	int b = 3;
	int r = a % b;

	cout << "나머지 연산 : " << r << endl;
	//1~100 중에 짝수만 화면에 출력해보자
	for (int i = 1; i <= 100; i++)
	{
		// 1. 만약 i 가 짝수라면
		if (i % 2 == 0)
		{
			// 2. i 를 출력하고 싶다.
			cout << i << endl;
		}
		//sum += i;
	}

	// 더한 결과를 출력하고 싶다.
	return 0;
}