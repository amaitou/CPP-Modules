/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:05:26 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:05:27 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain *c_brain;

	public:
		Cat();
		Cat(std::string type);
		~Cat();
		Cat(const Cat &copy);
		Cat & operator = (const Cat &object);

		void makeSound();
		std::string getType() const;
};

#endif