#include <iostream>

int main()
{
	int* arr;
	int count = 0;
	int Max = -1000000;
	int Min = 1000000;
	std::cout << "정수의 개수 : ";
	std::cin >> count;	//배열의 크기를 입력 받음.
	std::cout << "정수를 입력해 주십시오." << std::endl;
	arr = (int*)malloc(sizeof(int) * count);
	

	for (int i = 0; i < count; i++)
	{
		std::cin >> arr[i];
		if (arr[i] > 1000000 || arr[i] < -1000000)
		{
			std::cout << "error : 허용치 초과" << std::endl;
			free(arr);
			_exit(1);
		}
	}

	for (int i = 0; i < count; i++)
	{
		if (Max < arr[i])
		{
			Max = arr[i];
		}
	}

	for (int i = 0; i < count; i++)
	{
		if (Min > arr[i])
		{
			Min = arr[i];
		}
	}
	std::cout << "최댓값 : " << Max << std::endl;
	std::cout << "최솟값 : " << Min << std::endl;

	free(arr);
	return 0;
}