#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

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
		void            ADD();
		void            EXIT();
		void            SEARCH(int idx);
};

#endif
