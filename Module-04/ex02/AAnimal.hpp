/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:05:10 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:05:11 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string type;
	
	public:
		AAnimal();
		AAnimal(std::string type);
		virtual ~AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal & operator = (const AAnimal &object);

		virtual void makeSound() = 0;
		virtual std::string getType() const;
} ;

#endif