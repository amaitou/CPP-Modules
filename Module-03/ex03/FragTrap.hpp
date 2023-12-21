/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:01:25 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:01:26 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define FRAGTRAP_HEALTH 100
#define FRAGTRAP_ENERGY 100
#define FRAGTRAP_ATTACK 30

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string __name);
		~FragTrap();
		FragTrap(const FragTrap &_copy);
		FragTrap & operator = (const FragTrap &__object);

		void highFivesGuys(void);
} ;

#endif