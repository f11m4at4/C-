#include <iostream>
using namespace std;

int Plus(int number1, int number2)
{
	int result = number1 + number2;
	
	return result;
}

int Minus(int number1, int number2)
{
	int result = number1 - number2;

	return result;
}

int Mult(int number1, int number2)
{
	int result = number1 * number2;

	return result;
}

int Div(int number1, int number2)
{
	// number1 : ����, number2 : �и�  
	// �и� 0�̶�� -1 �� ��������� ��ȯ�ؼ� ������ �ִ� ��� �˷��ְ�ʹ�.
	// ���� number2 �� 0�̸� -1 �� ��������
	if (number2 == 0)
	{
		return -1;
	}
	int result = number1 / number2;

	return result;
}
int mainFunc()
{
	int result = Div(200, 0);
	
	// ���� result �� -1 �̶�� 0���� �߸� ���������ϴ�. �� ���
	if (result == -1)
	{
		cout << "0���� �߸� ���������ϴ�." << endl;
		return 0;
	}
	// �׷��� ������ �׳� ����� ���
	cout << result << endl;
	return 0;
}