#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    size_t i;

    i = 0;
    this->is_pended = -1;
    int temp[14] = {0, 1, 1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731};
    while (i < 14)
    {
        this->jacobstal[i] = temp[i];
        ++i;
    }
    this->number_of_elements = 0;
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
    if (number[i] == '+')
        ++i;
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
        this->deque_sequence.push_back(atoi(ag[i]));
        ++i;
        this->number_of_elements++;
    }
    return (0);
}

void    PmergeMe::print_vector(char c)
{
    size_t i;

    i = 0;
    if (c == 'b')
        std::cout << "Before:\t";
    else
        std::cout << "After:\t";
    while (i < this->vector_sequence.size())
    {
        if (i + 1 == this->vector_sequence.size())
            std::cout << this->vector_sequence[i] << std::endl;
        else
            std::cout << this->vector_sequence[i] << " ";
        ++i;
    }
}

void    PmergeMe::print_deque(char c)
{
    size_t i;

    i = 0;
    if (c == 'b')
        std::cout << "Before:\t";
    else
        std::cout << "After:\t";
    while (i < this->deque_sequence.size())
    {
        if (i + 1 == this->deque_sequence.size())
            std::cout << this->deque_sequence[i] << std::endl;
        else
            std::cout << this->deque_sequence[i] << " ";
        ++i;
    }
}

void    PmergeMe::sort_vector(void)
{
    size_t  i;
    size_t  j;
    clock_t start;
    clock_t end;
    std::vector<int>::iterator insertion_point;

    i = 0;
    this->print_vector('b');
    start = clock();
    if (this->vector_sequence.size() % 2 != 0)
        this->is_pended = this->vector_sequence[this->vector_sequence.size() - 1];
    while (i < this->vector_sequence.size() && i + 1 < this->vector_sequence.size())
    {
        this->vector_main.push_back((std::max(this->vector_sequence[i], this->vector_sequence[i + 1])));
        this->vector_pend.push_back((std::min(this->vector_sequence[i], this->vector_sequence[i + 1])));
        i += 2;
    }
    if (this->is_pended != -1)
        this->vector_pend.push_back(this->is_pended);
    std::sort(this->vector_main.begin(), this->vector_main.end());
    this->vector_main.insert(this->vector_main.begin(), this->vector_pend[0]);
    this->vector_pend.erase(this->vector_pend.begin());
    i = 2;
    while (i < this->vector_pend.size())
    {
        j = this->jacobstal[i];
        if (j > this->vector_pend.size())
            break;
        insertion_point = std::lower_bound(this->vector_main.begin(), this->vector_main.end(), this->vector_pend[j - 1]);
        this->vector_main.insert(insertion_point, this->vector_pend[j - 1]);
        this->vector_pend.erase(this->vector_pend.begin() + (j - 1));
        ++i;
    }
    i = 0;
    while (i < this->vector_pend.size())
    {
        insertion_point = std::lower_bound(this->vector_main.begin(), this->vector_main.end(), this->vector_pend[i]);
        this->vector_main.insert(insertion_point, this->vector_pend[i]);
        ++i;
    }
    end = clock();
    this->vector_sequence = this->vector_main;
    this->print_vector('a');
    std::cout   << "Time to process a range of "
                << this->number_of_elements
                <<  " elements with std::vector\t: "
                << end - start
                << " us"
                << std::endl;
}

void    PmergeMe::sort_deque(void)
{
    size_t i;
    size_t j;
    clock_t start;
    clock_t end;
    std::deque<int>::iterator insertion_point;

    i = 0;
    this->is_pended = -1;
    start = clock();
    if (this->deque_sequence.size() % 2 != 0)
        this->is_pended = this->deque_sequence[this->deque_sequence.size() - 1];
    while (i < this->deque_sequence.size() && i + 1 < this->deque_sequence.size())
    {
        this->deque_main.push_back((std::max(this->deque_sequence[i], this->deque_sequence[i + 1])));
        this->deque_pend.push_back((std::min(this->deque_sequence[i], this->deque_sequence[i + 1])));
        i += 2;
    }
    if (this->is_pended != -1)
        this->deque_pend.push_back(this->is_pended);
    std::sort(this->deque_main.begin(), this->deque_main.end());
    this->deque_main.insert(this->deque_main.begin(), this->deque_pend[0]);
    this->deque_pend.erase(this->deque_pend.begin());
    i = 2;
    while (i < this->deque_pend.size())
    {
        j = this->jacobstal[i];
        if (j > this->deque_pend.size())
            break;
        insertion_point = std::lower_bound(this->deque_main.begin(), this->deque_main.end(), this->deque_pend[j - 1]);
        this->deque_main.insert(insertion_point, this->deque_pend[j - 1]);
        this->deque_pend.erase(this->deque_pend.begin() + (j - 1));
        ++i;
    }
    i = 0;
    while (i < this->deque_pend.size())
    {
        insertion_point = std::lower_bound(this->deque_main.begin(), this->deque_main.end(), this->deque_pend[i]);
        this->deque_main.insert(insertion_point, this->deque_pend[i]);
        ++i;
    }
    end = clock();
    this->deque_sequence = this->deque_main;
    std::cout   << "Time to process a range of "
                << this->number_of_elements
                <<  " elements with std::deque\t: "
                << end - start
                << " us"
                << std::endl;
}