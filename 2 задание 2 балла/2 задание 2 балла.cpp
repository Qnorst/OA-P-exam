
#include <iostream>

int main()
{
    int x = 0, max = INT_MIN;

    std::cout << "Enter count of numbers: ";
    std::cin >> x;

    int num = 0;
    for (int i = 0; i <= x; ++i)
    {
        std::cout << "Enter number: ";
        std::cin >> num;
        
        if (num > max)
        {
            max = num;
        }
    }

    std::cout << "Max num is: " << max;
}
