#include <iostream>
std::string removeDuplicate(std::string s)
{
	for(int current = 0; current != s.size()-1; current++)
	{
		if (s.at(current) == '\0')
			continue;

		for(int i = current+1; i != s.size(); i++)
			if (s.at(current) == s.at(i))
				s.at(i) = '\0';
	}

	std::string ret;
	for(char ch: s)
		if (ch != '\0')
			ret += ch;
	return ret;
}
int main()
{
	std::string s("helloworldmydudes");
	s = removeDuplicate(s);
	std::cout << s << std::endl;
}
