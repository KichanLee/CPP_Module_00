/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:52:24 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/20 15:44:23 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

void	func_toupper(std::string& str);

int main(int ac, char *av[])
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	
	for(int i = 1; i < ac; ++i)
	{
		std::string convert = av[i];
		func_toupper(convert);
		std::cout << convert;
	}
	std::cout << std::endl;

	return (0);
}

void	func_toupper(std::string& str)
{
	for(int i = 0; i < (int) str.length(); ++i)
		str[i] = std::toupper(str[i]);
}