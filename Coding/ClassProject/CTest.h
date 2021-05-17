#pragma once

typedef struct
{
	// 접근 권한은 기본이 public
	int number1;
}SType;

class CTest
{
//[접근지시자:]
	// 기본 접근 권한은 private
	float number1;

public:
	void SetNumber1(int value);

	int GetNumber1();

private:
	int number2;
};

