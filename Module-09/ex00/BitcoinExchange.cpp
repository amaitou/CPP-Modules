
#include "BitcoinExchange.hpp"

void read_data(std::map<std::string, float> &m, std::string path)
{
    std::string     token;
    std::string     date;
    float           value;
    size_t          position;
    std::ifstream   database;
    char            *ptr;

    database.open(path.c_str());
    if (!database.is_open())
        throw std::string("failed to read from database file");
    std::getline(database, token);
    while (std::getline(database, token))
    {
        position = token.find(",");
        date = token.substr(0, position);
        value = strtof(token.substr(position + 1).c_str(), &ptr);
        m.insert(std::make_pair(date, value));
    }
}

int check_value(std::string &str)
{
    size_t  i(0);
    int     n;
    if (str[i] == '-' || str[i] == '+')
        ++i;
    while (i < str.length())
    {
        if (isdigit(str[i]) || str[i] == '.')
            ++i;
        else
            return (1);
    }
    n = atoi(str.c_str());
    if (n > 1000 || n < 0)
        return (2);
    return (0);
}

int check_key(std::string &str)
{
    size_t      count(0);
    size_t      i(0);
    std::string year;
    std::string month;
    std::string day;
    size_t      f_position;
    size_t      l_position;
    
    while (i < str.length())
    {
        if (str[i] == '-')
            ++count;
        ++i;
    }
    if (count > 2 || count < 2)
        return (1);
    i = 0;
    while (i < str.length())
    {
        if (!(isdigit(str[i]) || str[i] == '-'))
            return (2);
        ++i;
    }
    f_position = str.find('-');
    l_position = str.rfind('-');
    if (f_position == std::string:: npos || l_position == std::string::npos)
        return (3);
    year = str.substr(0, f_position);
    month = str.substr(f_position + 1, l_position - f_position - 1);
    day = str.substr(l_position + 1);
    if (atoi(year.c_str()) > 2023 || atoi(year.c_str()) < 2009)
        return (4);
    if (atoi(month.c_str()) > 12 || atoi(month.c_str()) < 1)
        return (4);
    if (atoi(day.c_str()) > 31 || atoi(day.c_str()) < 1)
        return (4);
    return (0);
}

int check_error(std::string &key, std::string &value)
{
    if (check_key(key) < 4 && check_key(key))
    {
        std::cout << "error: invalid date => " << key << std::endl;
        return (1);
    }
    if (check_key(key) == 4)
    {
        std::cout << "error: date out of range => " << key << std::endl;
        return (1);
    }
    if (check_value(value) == 1)
    {
        std::cout << "error: invalid value => " << value << std::endl;
        return (2);
    }
    if (check_value(value) == 2)
    {
        std::cout << "error: value out of range => " << value << std::endl;
        return (2);
    }
    return (0);
}

void calculate_bitcoin(std::string path, std::map<std::string, float> &m)
{
    char            *ptr;
    float           bitcoin;
    std::string     token;
    std::string     date;
    std::string     value;
    size_t          position;
    std::ifstream   input;
    std::map<std::string, float>::iterator t;

    input.open(path.c_str());
    if (!input.is_open())
        throw std::string ("failed to open input database");
    std::getline(input, token);
    if (token != "date | value")
        throw std::string ("the input file must always starts with \"date | value\"");
    while (std::getline(input, token))
    {
        position = token.find(" ");
        if (position == std::string::npos)
            std::cout << "error: invalid input file format => " << token << std::endl;
        else
        {
            date = token.substr(0, position);
            value = token.substr(position + 3);
            if (check_error(date, value))
                continue;
            t = m.begin();
            while (t != m.end())
            {
                if (t->first == date)
                {
                    bitcoin = strtof(value.c_str(), &ptr);
                    std::cout << date << " => " << value << " => "
                        << t->second * bitcoin << std::endl;
                }
                ++t;
            }
        }
    }
}