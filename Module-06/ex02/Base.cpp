#include "Base.hpp"

Base::~Base() {}

Base *Base::generate(void)
{
	int randomNumber;

	 srand(time(NULL));
	randomNumber = (rand() % 3) + 1;
	std::cout << randomNumber << std::endl ;
	if (randomNumber == 1)
		return (new A());
	else if (randomNumber == 2)
		return (new B());
	else if (randomNumber == 3)
		return (new C());
	else
		return (NULL);
}

void	Base::identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "None" << std::endl;
}

void	Base::identify(Base &p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "None" << std::endl;
}