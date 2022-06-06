
#include <iostream>

int main()
{
    int monthDay = 0;

    do
    {
        std::cout << "Enter month date";
        std::cin >> monthDay;
        if (monthDay < 1 && monthDay > 31)
        {
            std::cout << "wrong date number!!! T_T";
        }
    }while (monthDay < 1 && monthDay > 31);

    monthDay = monthDay % 7;

    switch (monthDay)
    {
    case 1:
        std::cout << "Monday";
        break;
    case 2:
        std::cout << "Tuesday";
        break;
    case 3:
        std::cout << "Wednesday";
        break;
    case 4:
        std::cout << "Thursday";
        break;
    case 5:
        std::cout << "Friday";
        break;
    case 6:
        std::cout << "Saturday";
        break;
    case 7:
        std::cout << "Sunday";
        break;
    }
}
