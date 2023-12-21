/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:02:00 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:02:01 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal &copy);
		Animal & operator = (const Animal &object);

		virtual void makeSound() const;
		virtual std::string getType() const;
} ;

#endif