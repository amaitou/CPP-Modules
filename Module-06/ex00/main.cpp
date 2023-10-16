#include "ScalarConverter.hpp"

int main(int ac, char **ag)
{
    if (ac != 2)
    {
        std::cerr << "Invalid Args" << std::endl;
        std::cerr<< "Usuage: ./ScalarConverter <string>" << std::endl;
        return (EXIT_FAILURE);
    }
    ScalarConverter converter;
    converter.setString(ag[1]);
    std::cout << converter.checkInteger() << std::endl;
    return (EXIT_SUCCESS);
}