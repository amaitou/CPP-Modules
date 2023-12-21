/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:33:07 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:33:08 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static int check_sign(char sign)
{
	return (sign == '+' || sign == '-' || sign == '*' || sign == '/');
}

static int perform_evaluation(std::stack<int> &st, char sign)
{
	int first_operand = st.top(); st.pop();
	int second_operand = st.top(); st.pop();
	if (sign == '+')
		st.push(second_operand + first_operand);
	else if (sign == '-')
		st.push(second_operand - first_operand);
	else if (sign == '/')
		st.push(second_operand / first_operand);
	else if (sign == '*')
		st.push(second_operand * first_operand);
	else
		return (1);
	return (0);
}

int postfix_evaluation(std::string infix)
{
	std::stack<int> st;
	std::string token;
	std::stringstream str(infix);

	while(std::getline(str, token, ' '))
	{
		if (token.empty())
			continue;
		if (token.find_first_not_of("0123456789+-/*") != std::string::npos)
		{
			str.str(std::string());
			std::cerr << "Error: Invalid Char" << std::endl;
			return (INT_MIN);
		}
		if (token.length() > 1)
		{
			str.str(std::string());
			std::cerr << "Error: Token Must Be Only One Char" << std::endl;
			return (INT_MIN);
		}
		if (isdigit(token[0]))
		{
			st.push(token[0] - '0');
			continue;
		}
		if (check_sign(token[0]))
		{
			if (st.size() < 2 || st.empty())
			{
				str.str(std::string());
				std::cerr << "Error: Invalid Format" << std::endl;
				return (INT_MIN);
			}
			if (perform_evaluation(st, token[0]))
			{
				str.str(std::string());
				std::cerr << "Error: Invalid Operand" << std::endl;
				return (INT_MIN);
			}
		}
	}
	if (st.size() > 1)
		return (INT_MAX);
	return (st.top());
}