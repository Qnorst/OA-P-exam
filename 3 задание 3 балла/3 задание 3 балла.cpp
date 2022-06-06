
#include <iostream>

int main()
{
    int size = 10;
    int* arr = new int[size];

    for (int i = 0; i < size; ++i)
    {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }
    std::cout << "Your array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << '\t';
    }
    std::cout << std::endl;

    int min = INT_MAX;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int mult = 1;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] - min == 2)
        {
            mult *= arr[i];
        }
    }
    std::cout << "Multiply of nums differ from min by 2 = " << mult;
    delete[] arr;
}
