#include <iostream>
// finds the maximum of 3 numbers

int main(int argc, char ** argv)
{
	if (argc == 1)
	{
		std::cout << "Usage: " << argv[0] << " a b c";
		return 1;
	}
	int a, b, c;
	a = std::atoi(argv[1]);
	b = std::atoi(argv[2]);
	c = std::atoi(argv[3]);

	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	std::cout << "Max: " << max << std::endl;
}
