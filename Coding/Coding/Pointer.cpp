#include <iostream>
using namespace std;

int mainPointer()
{
	int a = 10;
	// 1~10까지 오름차순으로 정렬해보자
	int arr[10] = { 1, 2, 5, 8, 9, 4, 6, 7, 3, 10 };
	int size = sizeof(arr) / sizeof(int);
	cout << "size : " << size << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j<size;j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];

				arr[i] = arr[j];
				arr[j] = temp;
				//i--;
				//break;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}