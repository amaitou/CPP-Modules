#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(2);
	mstack.push(4);
	mstack.push(6);
	mstack.pop();
	mstack.push(8);
	mstack.push(10);
	mstack.push(12);
	mstack.push(14);
	std::cout << "Size: " << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}