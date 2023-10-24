#include "BitcoinExchange.hpp"

// void	calculate_bitcoin(std::string file)
// {
// 	std::map<std::string, float> m;
// 	std::ifstream infile;
// 	std::string line;
// 	std::string	date;
// 	std::string value;
// 	int	counter;
// 	size_t position;

// 	infile.open(file);
// 	if (!infile.is_open())
// 		throw Exceptions::CouldNotReadTheFile();
// 	counter = 0;
// 	while (std::getline(infile, line))
// 	{
// 		if (counter == 0)
// 		{
// 			position = line.find("|");
// 			if (position == std::string::npos)
// 				throw Exceptions::ErrorInParsing();
// 			date = line.substr(0, position);
// 			value = line.substr(position + 2); 
// 			if (date != "date" || value != "value")
// 				throw Exceptions::ErrorInParsing();
// 			std::cout << "date: " << date << std::endl;
// 			std::cout << "value: " << value << std::endl;
// 		}
// 	}
// }

int main(int ac, char **ag)
{
	try
	{
		if (!(ac == 2))
			throw BitcoinExchange::FileIsNotExist();
		BitcoinExchange btc(ag[1]);
		btc.check_first_line();
		return (EXIT_SUCCESS);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}