/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:30:19 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:30:21 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>

class Data
{
	private:
		std::string name;
		int age;
		float	height;
		float	pounds;
	public:
		Data();
		Data(std::string name, int age, float height, float pounds);
		~Data();
		Data(const Data &copy);
		Data & operator = (const Data &object);

		std::string getName(void) const;
		int	getAge(void) const;
		float	getHeight(void) const;
		float	getPounds(void) const;

		void	setName(std::string name);
		void	setAge(int age);
		void	setHeight(float height);
		void	setPounds(float pounds);
} ;

#endif
