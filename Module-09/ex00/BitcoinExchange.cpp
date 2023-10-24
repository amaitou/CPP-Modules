#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string str)
{
	this->file = str;
	this->infile.open(this->file);
	if (!this->infile.is_open())
		throw BitcoinExchange::FileIsNotOpened();
}

BitcoinExchange::~BitcoinExchange()
{
	this->infile.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator= (const BitcoinExchange &object)
{
	this->file = object.file;
	this->infile.open(object.file);
	if (!this->infile.is_open())
		throw BitcoinExchange::FileIsNotOpened();
	return (*this);
}

void	BitcoinExchange::check_first_line(void)
{
	std::string line;

	std::getline(this->infile, line);
	if (line != "date | value")
		throw BitcoinExchange::ErrorInParsing();
}