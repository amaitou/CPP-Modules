#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    this->is_pended = -1;
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    *this = copy;
}

PmergeMe &PmergeMe::operator = (const PmergeMe &object)
{
	(void)object;
	return (*this);
}

PmergeMe::~PmergeMe() {}

int PmergeMe::check_number(std::string &number)
{
    size_t  i;
    
    i = 0;
    while (i < number.size())
    {
        if (!isdigit(number[i]))
            return (1);
        ++i;
    }
    return (0);
}

int PmergeMe::parse_numbers(char **ag)
{
    size_t i;
    std::string number;

    i = 1;
    while (ag[i])
    {
        number = ag[i];
        if (this->check_number(number))
            return (1);
        this->vector_sequence.push_back(atoi(ag[i]));
        ++i;
    }
    return (0);
}

void PmergeMe::print_sequence(void)
{
    size_t i;

    i = 0;
    while (i < this->vector_sequence.size())
    {
        std::cout << this->vector_sequence[i] << std::endl;
        ++i;
    }
}