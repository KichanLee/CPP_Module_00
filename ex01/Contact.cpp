/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:52:26 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/15 13:52:27 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_First_Name()
{
	return first_name;
}
std::string Contact::get_Last_Name()
{
	return last_name;
}
std::string Contact::get_Nick_Name()
{
	return nick_name;
}
std::string Contact::get_Phone_Number()
{
	return phone_number;
}
std::string Contact::get_Darkest_Secret()
{
	return darkest_secret;
}

void Contact::set_First_Name(std::string str)
{
	this->first_name = str;
}
void Contact::set_Last_Name(std::string str)
{
	this->last_name = str;
}
void Contact::set_Nick_Name(std::string str)
{
	this->nick_name = str;
}
void Contact::set_phone_Number(std::string str)
{
	this->phone_number = str;
}
void Contact::set_Darkest_Secret(std::string str)
{
	this->darkest_secret = str;
}