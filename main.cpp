#include <iostream>

int main()
{
	int* arr;
	int count = 0;
	int Max = -1000000;
	int Min = 1000000;
	std::cout << "������ ���� : ";
	std::cin >> count;	//�迭�� ũ�⸦ �Է� ����.
	std::cout << "������ �Է��� �ֽʽÿ�." << std::endl;
	arr = (int*)malloc(sizeof(int) * count);
	

	for (int i = 0; i < count; i++)
	{
		std::cin >> arr[i];
		if (arr[i] > 1000000 || arr[i] < -1000000)
		{
			std::cout << "error : ���ġ �ʰ�" << std::endl;
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
	std::cout << "�ִ� : " << Max << std::endl;
	std::cout << "�ּڰ� : " << Min << std::endl;

	free(arr);
	return 0;
}