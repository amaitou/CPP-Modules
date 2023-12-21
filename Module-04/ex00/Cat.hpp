/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:02:07 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:02:08 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(std::string type);
		~Cat();
		Cat(const Cat &copy);
		Cat & operator = (const Cat &object);

		void makeSound() const;
		std::string getType() const;
};

#endif