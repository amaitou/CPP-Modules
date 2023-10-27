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

void	BitcoinExchange::fill_map(void)
{
	std::string line;
	std::string date;
	float value;
	size_t	position;
	std::ifstream database;

	database.open("./data.csv");
	if (!database.is_open())
		throw BitcoinExchange::ErrorInParsing();
	std::getline(database, line);
	while (std::getline(database, line))
	{
		position = line.find(",");
		date = line.substr(0, position);
		value = std::stof(line.substr(position + 1));
		this->m.insert(std::make_pair(date, value));
	}
}

int BitcoinExchange::check_value(std::string &str)
{
	size_t i(0);

	if (str[i] == '-' || str[i] == '+')
		++i;
	while (i < str.length())
	{
		if (isdigit(str[i]) || str[i] == '.')
			++i;
		else
			return (1);
	}
	long n = atoi(str.c_str());
	if (n > 1000 || n < 0)
		return (2);
	if (n >= INT_MAX || n <= INT_MIN)
		return (2);
	return (0);
}

int BitcoinExchange::check_error(std::string key, std::string value)
{
	if (this->check_key(key) < 5 && this->check_key(key))
	{
		std::cout << "Error: invalid date => " << key << std::endl;
		return (1);
	}
	if (this->check_key(key) == 5)
	{
		std::cout << "Error: date out of range => " << key << std::endl;
		return (1);
	}
	if (this->check_value(value) == 1)
	{
		std::cout << "Error: invalid value => " << value << std::endl;
		return (2);
	}
	if (this->check_value(value) == 2)
	{
		std::cout << "Error: value out of range => " << value << std::endl;
		return (2);
	}
	return (0);
}

int BitcoinExchange::check_key(std::string &str)
{
	size_t _count;
	size_t i(0);
	std::string year;
	std::string month;
	std::string day;
	size_t	first_position;
	size_t	last_position;

	_count = std::count(str.begin(), str.end(), '-');
	if (_count < 2 || _count > 2)
		return (2);
	while (i < str.length())
	{
		if (!(isdigit(str[i]) || str[i] == '-'))
			return (3);
		++i;
	}
	first_position = str.find("-");
	last_position = str.rfind("-");
	if (first_position == std::string::npos || last_position == std::string::npos)
		return (4);
	year = str.substr(0, first_position);
	month = str.substr(first_position + 1, last_position - first_position - 1);
	day = str.substr(last_position + 1);
	if (atoi(year.c_str()) < 2009 || atoi(year.c_str()) > 2023)
		return (5);
	if (atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
		return (5);
	if (atoi(day.c_str()) < 1 || atoi(day.c_str()) > 31)
		return (5);
	return (0);
}

void	BitcoinExchange::calculate_bitcoin(void)
{
	std::string line;
	std::string date;
	std::string value;
	size_t	position;

	while (std::getline(this->infile, line))
	{
		position = line.find(" ");
		if (position == std::string::npos)
			std::cout << "Error: bad input => " << line << std::endl;
		else
		{
			date = line.substr(0, position);
			value = line.substr(position + 3);
			if (this->check_error(date, value))
				continue;
			std::map<std::string, float>::iterator t = this->m.begin();
			while (t != this->m.end())
			{
				if (t->first == date)
					std::cout << date << " => " << value << " => " << t->second * stof(value) << std::endl;
				++t;
			}
		}
	}
}