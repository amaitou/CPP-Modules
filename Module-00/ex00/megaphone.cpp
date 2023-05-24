
#include <iostream>
#include <string>


int main(int ac, char **ag)
{
	std::string str;
	int 	i;
	int 	j;
	char	*p;

	str = "";
	i = 1;
	if (ac >= 2)
	{
		while (i < ac)
		{
			p = ag[i];
			j = 0;
			while (p[j])
			{
				if (p[j] >= 'a' && p[j] <= 'z')
				{
					p[j] -= 32;
					str += p[j];
				}
				else
					str += p[j];
				++j;
			}
			++i;
		}
		std::cout << str << std::endl ;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
