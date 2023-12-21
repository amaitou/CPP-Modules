/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:32:45 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:32:46 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BitcoinExchange_HPP
#define BitcoinExchange_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include <map>
#include <cstdlib>
#include <climits>

void    read_data(std::map<std::string, float> &m, std::string path);
int     check_value(std::string &str);
int     check_key(std::string &str);
int     check_error(std::string &date, std::string &value);
void    calculate_bitcoin(std::string path, std::map<std::string, float> &m);

#endif