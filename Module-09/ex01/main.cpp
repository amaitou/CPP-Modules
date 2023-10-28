#include "RPN.hpp"

int main(int ac, char **ag)
{
	try
	{
		(void)ag;
		if (ac != 2)
			throw std::string("Error: Invalid Arguments");
		int postfix_value = postfix_evaluation(ag[1]);
		if (postfix_value == INT_MIN)
			return (EXIT_FAILURE);
		std::cout << postfix_value << std::endl;
	}
	catch(const std::string &e)
	{
		std::cout << "Error : " << e << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}