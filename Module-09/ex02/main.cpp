#include "PmergeMe.hpp"

int main(int ac, char **ag)
{
    if (ac <= 0)
    {
        std::cout << "Error: sequence of numbers needed" << std::endl;
        return (1);
    }
    PmergeMe p;
    p.parse_numbers(ag);
    p.print_sequence();
    return (0);
}