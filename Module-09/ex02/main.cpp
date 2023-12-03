#include "PmergeMe.hpp"

int main(int ac, char **ag)
{
    if (ac <= 1)
    {
        std::cout << "Error: sequence of numbers needed" << std::endl;
        return (1);
    }
    PmergeMe p;
    if (p.parse_numbers(ag))
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
    p.sort_vector();
    p.sort_deque();
    return (0);
}
