#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{
	setlocale(0, "Rus");

	float min = 0, max = 0, step = 0;
	std::cout << "Введите пределы [a, b]: ";
	std::cin >> min >> max;
	std::cout << "\nВведите шаг: ";
	std::cin >> step;

	for (float x = min; x <= max; x += step)
	{
		std::cout << std::setw(6) << x << std::setprecision(3)
		<< std::setw(15) << std::fixed << ((2.3 * (x * x * x) - 2) / (1.09 * (x * x) + 3)) << std::endl;
	}
	return 0;
}