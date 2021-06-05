#include <iostream>
#include <map>

int main()
{
	std::string s("application")

	std::map<char, int> occurences;
	for(char ch: s)
		occurences[ch]++;
	for(auto o: occurences)
		std::cout << o.first << " occurs " << o.second << " times." << std::endl;
}
