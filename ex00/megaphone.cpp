#include <iostream>


std::string func_toupper(const std::string& str)
{
	std::string result = str;

	for(int i = 0; i < (int) str.length(); ++i)
		result[i] = std::toupper(result[i]);
	return result;
}

int main(int ac, char *av[])
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(int i = 1; i < ac; ++i)
		std::cout << func_toupper((std::string)av[i]);
	std::cout << std::endl;
}