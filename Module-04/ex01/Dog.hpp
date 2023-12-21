/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:04:20 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:04:21 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *d_brain;
	public:
		Dog();
		Dog(std::string type);
		~Dog();
		Dog(const Dog &copy);
		Dog & operator = (const Dog &object);

		void makeSound() const;
		std::string getType() const;
};

#endif