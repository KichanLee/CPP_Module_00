/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:52:24 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/15 13:52:24 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string func_toupper(const std::string& str);

int main(int ac, char *av[])
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	for(int i = 1; i < ac; ++i)
	{
		std::cout << func_toupper((std::string)av[i]);
		if(i != ac -1)
			std::cout << " ";
	}

	
	std::cout << std::endl;
}

std::string func_toupper(const std::string& str)
{
	std::string result = str;

	for(int i = 0; i < (int) str.length(); ++i)
		result[i] = std::toupper(result[i]);
	
	return (result);
}