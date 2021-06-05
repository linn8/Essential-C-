#include <iostream>
#include <vector>
int main()
{
	std::vector<std::string> words;
	std::string s("Sweet dreams are made of this");
	int index = 0, count = 0;
	int pos;
	while((pos = s.find(' ', index)) != std::string::npos)
	{
		count = pos - index;
		words.push_back(s.substr(index, count));
		index = pos+1;
	}
	// pushing the last word
	words.push_back(s.substr(index, s.size()-index));
	for(std::string s: words)
		std::cout << s << std::endl;
}
