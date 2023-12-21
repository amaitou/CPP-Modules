/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:59:09 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:59:10 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string _name);
		~ScavTrap();
		ScavTrap(const ScavTrap &_copy);
		ScavTrap & operator = (const ScavTrap &_object);

		void	attack(const std::string& target);
		void	guardGate();
} ;

#endif