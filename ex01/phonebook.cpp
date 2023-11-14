#include "Phonebook.hpp"


/*
*   input 으로 들어온 인자 값 처리 eof 여부
	getline으로 처리해주면 된다.
*/
void	PhoneBook:: execute_program()
{
	while (1)
	{
		std::cout << "idx : " << idx << std::endl;
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
	std::cin >> input;
	
	return (input);
}

void	PhoneBook::choose_menu(std::string input)
{
	while (1)
	{
		if (input == "ADD")
			return (ADD());
		if (input == "SEARCH")
		{
			std::cout << "Input the Index" << std::endl;
			std::cin >> idx;
			return (SEARCH(idx));
		}
		if(input == "EXIT")
			return (EXIT());
		print_error();
		return ;
	}
}


std::string PhoneBook::length_over_ten(std::string str) {
    if (str.length() > 10) {
        std::string modify_str = str.substr(0, 9); // Take the first 9 characters
        modify_str.push_back('.'); // Append a dot
        return modify_str;
    }
    return str; // Return the original string if its length is 10 or less
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
	std::cout << "idx value is " << idx << std::endl;
	std::cout << "Input First Name" << std::endl;
	std::cin >> input;
	contact[idx].set_First_Name(input);
	std::cout << contact[idx].get_First_Name();
	std::cout << "Input Last Name" << std::endl;
	std::cin >> input;
	contact[idx].set_Last_Name(input);
	std::cout << "Input Nick Name" << std::endl;
	std::cin >> input;
	contact[idx].set_Nick_Name(input);
	std::cout << "Input Phone Number" << std::endl;
	std::cin >> input;
	contact[idx].set_phone_Number(input);
	std::cout << "Input Darkest_Secret" << std::endl;
	std::cin >> input;
	contact[idx].set_Darkest_Secret(input);
	++this->idx;
}

void    PhoneBook:: SEARCH(int idx)
{
	if(this->idx >= 0 && this->idx < 8)
	{
		print_format(std::to_string(this->idx));
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