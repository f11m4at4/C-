#pragma once

typedef struct
{
	// ���� ������ �⺻�� public
	int number1;
}SType;

class CTest
{
//[����������:]
	// �⺻ ���� ������ private
	float number1;

public:
	void SetNumber1(int value);

	int GetNumber1();

private:
	int number2;
};

