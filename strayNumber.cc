#include <iostream>
#include <vector>
// finds stray number in an int vector
// [1, 2, 1, 1 ] => 2
// [7, 7, 7, 1]  => 1

int stray(std::vector<int> &numbers)
{
	int same;
	int a = numbers[0];
	int b = numbers[1];
	int c = numbers[2];

	// if first three elements are same, we haven't found our stray, so search using loop
	if ( a == b && b == c)
	{
		same = a;
		for(int i = 3; i != numbers.size(); i++)
		{
			if (numbers[i] != same)
				return numbers[i];
		}
	}
	// else our stray is in the first 3
	else
	{
		if (a == b)
			return c;
		if (a == c)
			return b;
		return a;
	}
}

int main()
{
	std::vector<int> numbers{1, 2, 1, 1, 1};
	std::cout << stray(numbers) << std::endl;
}
