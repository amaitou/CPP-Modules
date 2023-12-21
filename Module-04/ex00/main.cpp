/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:02:19 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:02:20 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "[.] Calling Constructors\n" << std::endl;
	const Animal* animal = new Animal("Monkey");
	const Animal* dog = new Dog("charlie");
	const Animal* cat = new Cat("Luna");
	const WrongAnimal *wrong_animal = new WrongAnimal("WrongAnimal");
	const WrongAnimal *wrong_cat = new WrongCat("WrongCat");

	std::cout << std::endl;

	std::cout << "[.] displaying names\n" << std::endl;
	std::cout << animal->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrong_animal->getType() << " " << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;

	std::cout << std::endl;
	
	std::cout << "[.] Displaying Sounds\n" << std::endl;
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	wrong_animal->makeSound();
	wrong_cat->makeSound();

	std::cout << std::endl;

	std::cout << "[.] Calling Destructors\n" << std::endl;
	delete cat;
	delete dog;
	delete animal;
	delete wrong_cat;
	delete wrong_animal;

	return 0;
}