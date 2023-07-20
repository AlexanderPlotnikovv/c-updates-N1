#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vector = { 4,7,9,14,12 };
	std::for_each(vector.begin(), vector.end(), [](int vector)
		{
			if (vector % 2 != 0)
			{
				std::cout << 3 * vector << " ";
			}
			else
			{
				std::cout << vector << " ";
			}
		});
	return 0;
}