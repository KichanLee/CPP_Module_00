/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:53:13 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/15 17:10:21 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <sstream>

class PhoneBook
{
	private:
		Contact         contact[8];
		std::string     input;
		

	public:

		int             idx;
		std::string     show_menu();
		std::string     length_over_ten(std::string str);
		void			get_eof();
		void            choose_menu(std::string input);
		void            execute_program();
		void            print_error();
		void            print_format(std:: string str);
		void			print_searchformat();
		void			show_data();
		void            ADD();
		void            EXIT();
		void            SEARCH(int idx, int flag);
};

#endif
