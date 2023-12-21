/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:05:34 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:05:35 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain *d_brain;
	public:
		Dog();
		Dog(std::string type);
		~Dog();
		Dog(const Dog &copy);
		Dog & operator = (const Dog &object);

		void makeSound();
		std::string getType() const;
};

#endif