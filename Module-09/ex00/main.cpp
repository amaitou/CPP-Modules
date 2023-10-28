#include "BitcoinExchange.hpp"

int main(int ac, char **ag)
{
    try
    {
        if (ac != 2)
            throw std::string("invalid arguments, input file needed");
        std::map<std::string, float> m;
        read_data(m, "data.csv");
        calculate_bitcoin(ag[1], m);
    }
    catch(const std::string &e)
    {
        std::cerr << "error: " << e << '\n';
    }
    return (EXIT_SUCCESS);
}