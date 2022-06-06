
#include <iostream>

int main()
{
    int xp = -5, xp1 = 5, yp = -3, yp1 = 3;
    std::cout << "Enter x point: " << std::endl;
    int x = 0;
    std::cin >> x;
    std::cout << "Enter y point: " << std::endl;
    int y = 0;
    std::cin >> y;

    if (x <= xp1 && x >= xp && y >= yp && y <= yp1)
    {
        std::cout << "Point in cube";
    }
    else
    {
        std::cout << "Point not in cube";
    }

}
