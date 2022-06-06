
#include <iostream>

int main()
{
	int sum = 0;

	for (int i = 0; i <= 200; ++i)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
	}
	std::cout << "the sum of natural multiples of three: " << sum;
}

