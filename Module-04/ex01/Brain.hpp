/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:03:43 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:03:44 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	protected:
		std::string ideas[100];
	
	public:
		Brain();
		~Brain();
		Brain(const Brain &copy);
		Brain & operator = (const Brain &object);
} ;

#endif