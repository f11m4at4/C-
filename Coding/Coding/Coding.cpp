#include <iostream>
using namespace std;

int mainFor()
{
	// 1 ���� 100 ��� ���� ����� ����ϰ� �ʹ�.
	
	int sum = 0;
	// 2. �ʱ� 0 ���� 1�� ���Ѵ�.
	//sum = sum + 1;
	//sum += 1;
	//sum++;
	// 3. �� ��� ���� 2�� ���Ѵ�.
	//sum += 2;
	// 4. �� ��� ���� 3�� ���Ѵ�.
	//sum += 3;
	// 5. �� ��� ���� 4�� ���Ѵ�.
	//sum += 4;
	int a = 2;
	int b = 3;
	int r = a % b;

	cout << "������ ���� : " << r << endl;
	//1~100 �߿� ¦���� ȭ�鿡 ����غ���
	for (int i = 1; i <= 100; i++)
	{
		// 1. ���� i �� ¦�����
		if (i % 2 == 0)
		{
			// 2. i �� ����ϰ� �ʹ�.
			cout << i << endl;
		}
		//sum += i;
	}

	// ���� ����� ����ϰ� �ʹ�.
	return 0;
}