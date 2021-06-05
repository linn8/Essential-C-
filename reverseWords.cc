#include <iostream>

int main()
{
	std::string s("Roses are red. Violets are blue.");
	std::string res;
	std::string buffer;
	for(char ch: s)
	{
		if (ch == ' ')
		{
			res = buffer + " " + res;
			buffer = "";
		}
		else
			buffer += ch;
	}
	res = buffer + " " + res;
	res.pop_back();

	std::cout << res << std::endl;
}
