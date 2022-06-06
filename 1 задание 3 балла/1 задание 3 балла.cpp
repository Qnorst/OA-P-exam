#include <cmath>
#include <iostream>
using namespace std;

void ShakerSort(int* arr, size_t size)
{
	for (size_t i = 0; i < size - 1; ++i)
	{
		bool swapHappened = false;
		for (size_t j = 0; j < size - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapHappened = true;
			}
		}
		if (!swapHappened)
		{
			break;
		}
	}
}
void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int main()
{
	srand(time(0));
	setlocale(0, "Rus");
	int size = 10;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "Несортированный массив: ";
	ShowArray(arr, size);
	ShakerSort(arr, size);
	cout << "Отсортированный массив: ";
	ShowArray(arr, size);
	delete[] arr;
	return 0;
}