#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vector = { 4,7,9,14,12 };
	auto multiplicator = [](int num)
	{
		if (num % 2 != 0)
		{
			return num*3;
		}
		else
		{
			return num;
		}
	};
		
	auto cout = [multiplicator](int num)
	{
		std::cout << multiplicator(num) << " ";
	};
		
	std::for_each(vector.begin(), vector.end(), cout);
	return 0;
}