
#include <iostream>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Memory Address of string: " << &string << std::endl;
	std::cout << "memory Address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory Address of stringREF: " << &stringREF << std::endl;
	std::cout << "string value: " << string << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl; 
	return (0);
}
