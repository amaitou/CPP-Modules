/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:29:56 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:29:57 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **ag)
{
    if (ac != 2)
    {
        std::cerr << "Invalid Args" << std::endl;
        std::cerr<< "Usuage: ./ScalarConverter <string>" << std::endl;
        return (EXIT_FAILURE);
    }
    ScalarConverter::printValues(ag[1]);
    return (EXIT_SUCCESS);
}