/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:51:49 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:51:50 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
	private:
		std::string type;
	
	public:
		Weapon(std::string type);
		const std::string 	getType(void);
		void				setType(std::string type);
} ;

#endif