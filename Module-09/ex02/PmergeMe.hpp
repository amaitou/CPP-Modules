
#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <cstdlib>
#include <algorithm>

class PmergeMe
{
    private:
        std::vector<int> vector_sequence;
        std::deque<int>  deque_sequence;
        std::vector<int> vector_main;
        std::vector<int> vector_pend;
        int jacobstal[14];
        int is_pended;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        PmergeMe & operator = (const PmergeMe &object);
        ~PmergeMe();

        int     check_number(std::string &number);
        int     parse_numbers(char **ag);
        void    print_sequence(void);
        void    sort_vector(void);
};