
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include <map>
#include <cstdlib>

class BitcoinExchange
{
	private:
		std::string file;
		std::ifstream infile;
		std::map<std::string, float> m;
	
	public:
		BitcoinExchange(std::string str);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange & operator = (const BitcoinExchange &object);
		class FileIsNotExist: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("a file is needed\nUsage: ./btc <your file>");
				}
		};
		class FileIsNotOpened: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("couldn't open the given file");
				}
		};
		class CouldNotReadTheFile: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("couldn't read from the file");
				}
		};
		class ErrorInParsing: public std::exception
		{
			const char *what() const throw()
			{
				return ("failed to parse the content of the file");
			}
		};

		void	check_first_line(void) ;
		void	fill_map(void);
		int		check_value(std::string &str);
		int		check_key(std::string &str);
		int		check_error(std::string key, std::string value);c
		void	calculate_bitcoin(void);
};

#endif