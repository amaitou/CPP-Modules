#include <fstream>
#include <string>
#include <iostream>

std::string replace_extension(std::string filename)
{
	std::string newfile = "";
	size_t position = filename.find_last_of(".");
	if (position != std::string::npos)
	{
		newfile = filename.substr(0, position) + ".replace";
		return newfile;
	}
	else
		return filename + ".replace";
}

int main(void)
{
	std::string filename;
	std::string string1;
	std::string string2;
	std::string replaced;
	std::fstream fileone; 
	std::fstream filetwo;
	std::string  buffer;
	size_t position;
	
	std::cout << "[.] Enter The FileName: ";
	std::cin >> filename;
	fileone.open(filename, std::ios::in);
	if (!fileone.is_open())
	{
		std::cout << "[!] Could not open the given file" << std::endl;
		return (0);
	}
	replaced = replace_extension(filename);
	filetwo.open(replaced, std::ios::out);
	if (!filetwo.is_open())
	{
		std::cout << "[!] Could not open the replaced file" << std::endl;
		return (0);
	}
	std::cout << "[.] Enter The String1: ";
	std::cin >> string1;
	std::cout << "[.] Enter The String2: ";
	std::cin >> string2;
	
	while (getline(fileone, buffer, '\n'))
	{
		position = 0;
		while ((position = buffer.find(string1, position)) != std::string::npos)
			buffer = buffer.substr(0, position) + string2 + buffer.substr(position + string1.length(), buffer.length());
		filetwo << buffer << "\n";
	}
	return (0);
}