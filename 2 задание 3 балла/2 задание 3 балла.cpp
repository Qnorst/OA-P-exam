
#include <iostream>

int main()
{
    int size = 10;
    int* arr = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> arr[i];
	}
	
	std::cout << "Your array: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;

	int max = INT_MIN;
	int maxIdent = 0;	
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxIdent = i;
		}
	}

	int sum = 0;
	for (int j = 0; j < maxIdent; ++j)
	{
		sum += arr[j];
	}
	
	std::cout << "Sum of nums before max = " << sum;
	delete[] arr;
}

