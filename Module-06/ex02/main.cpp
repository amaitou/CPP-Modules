
#include "Base.hpp"

int main(void)
{
	Base *one = new Base();
	Base *two = one->generate();
	one->identify(two);
	one->identify(*two);

	delete one;
	delete two;
	return (EXIT_SUCCESS);
}