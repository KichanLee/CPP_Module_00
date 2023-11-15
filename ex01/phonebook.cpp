/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:52:47 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/15 16:31:28 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook:: get_eof()
{
	if (std::cin.eof()) 
		exit(0);
}

void	PhoneBook:: execute_program()
{
	idx = 0;
	while (1)
	{
		get_eof();
		input = show_menu();
		choose_menu(input);
	}
}

std::string	PhoneBook::show_menu()
{
	std::cout << std::endl;
	std::cout << "Welcome PhoneBook System Choose the Menu" << std::endl;
	std::cout << std::endl;
	std::cout << "[1] ADD [2] SEARCH [3] EXIT" << std::endl;
	std::getline(std::cin, input);
	get_eof();
	return (input);
}

void	PhoneBook::choose_menu(std::string input)
{
	std::string str;
	int	idx_integer;
	while (1)
	{
		if (input == "ADD")
			return (ADD());
		if (input == "SEARCH")
		{
			std::cout << "Input the Index" << std::endl;
			std::getline(std::cin, str);
			get_eof();
			std::istringstream input_idx(str);
			input_idx >> idx_integer;
			return (SEARCH(idx_integer));
		}
		if(input == "EXIT")
			return (EXIT());
		print_error();
		return ;
	}
}

std::string PhoneBook::length_over_ten(std::string str) 
{
    if (str.length() > 10) {
        std::string modify_str = str.substr(0, 9);
        modify_str.push_back('.');
        return modify_str;
    }
    return str;
}


void    PhoneBook:: print_error()
{
	std::cout << std::endl;
	std::cout << "Invalid Input. Try Again" << std::endl;
}

void    PhoneBook:: print_format(std:: string str)
{
	std::cout << std::setw(10) << str ;
}

void            PhoneBook:: EXIT()
{
	exit(0);
}  

void    PhoneBook:: ADD()
{
	if(idx > 7)
		idx = 0;
	std::cout << "Input First Name" << std::endl;
	std::getline(std::cin, input);
	get_eof();
	contact[idx].set_First_Name(input);
	std::cout << "Input Last Name" << std::endl;
	std::getline(std::cin, input);
	get_eof();
	contact[idx].set_Last_Name(input);
	std::cout << "Input Nick Name" << std::endl;
	std::getline(std::cin, input);
	get_eof();
	contact[idx].set_Nick_Name(input);
	std::cout << "Input Phone Number" << std::endl;
	std::getline(std::cin, input);
	get_eof();
	contact[idx].set_phone_Number(input);
	std::cout << "Input Darkest_Secret" << std::endl;
	std::getline(std::cin, input);
	get_eof();
	contact[idx].set_Darkest_Secret(input);
	++this->idx;
}

void    PhoneBook:: SEARCH(int idx)
{
	print_format("index");
	std::cout << '|';
	print_format("first name");
	std::cout << '|';
	print_format("last name");
	std::cout << '|';
	print_format("nick name");
	std::cout << std::endl;
	if(idx >= 0 && idx < 8)
	{
		print_format(std::to_string(idx));
		std::cout << '|';
		print_format(length_over_ten(contact[idx].get_First_Name()));
		std::cout << '|';
		print_format(length_over_ten(contact[idx].get_Last_Name()));
		std::cout << '|';
		print_format(length_over_ten(contact[idx].get_Nick_Name()));
	}
	else
		print_error();
}