#include "ScalarConverter.hpp"

int main(int ac, char **ag)
{
    if (ac != 2)
    {
        std::cerr << "Invalid Args" << std::endl;
        std::cerr<< "Usuage: ./ScalarConverter <string>" << std::endl;
        return (EXIT_FAILURE);
    }
    ScalarConverter::printValues(ag[1]);
    return (EXIT_SUCCESS);
}