/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:30:46 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:30:47 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>


class Base
{
	public:
		virtual ~Base();
		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

#endif