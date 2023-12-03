
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
        std::vector<int> vector_main;
        std::vector<int> vector_pend;
        std::deque<int>  deque_sequence;
        std::deque<int> deque_main;
        std::deque<int> deque_pend;
        int jacobstal[14];
        int is_pended;
        int  number_of_elements;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        PmergeMe & operator = (const PmergeMe &object);
        ~PmergeMe();

        int     check_number(std::string &number);
        int     parse_numbers(char **ag);
        void    sort_vector(void);
        void    sort_deque(void);
        void    print_vector(char c);
        void    print_deque(char c);
};