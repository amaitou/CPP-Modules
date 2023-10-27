#include "BitcoinExchange.hpp"

int main(int ac, char **ag)
{
	try
	{
		if (!(ac == 2))
			throw BitcoinExchange::FileIsNotExist();
		BitcoinExchange btc(ag[1]);
		btc.check_first_line();
		btc.fill_map();
		btc.calculate_bitcoin();
		return (EXIT_SUCCESS);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}