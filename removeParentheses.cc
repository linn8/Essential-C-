#include <iostream>

std::string removeParentheses(const std::string &s)
{
	std::string ret;
	int p = 0; // number of nested parentheses
	for(auto c: s)
	{
		if (c == '(')
			p++;
		else if (c == ')')
			p--;
		else if (p == 0)
			ret += c;
	}
	return ret;
}

int main()
{
	std::cout << removeParentheses("HELLO (FUCKING) WORLD!") << std::endl;;
	std::cout << removeParentheses("(as(df))hello world!") << std::endl;
}
