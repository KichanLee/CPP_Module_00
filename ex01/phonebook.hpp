#include <iostream>
#include <iomanip>

class Contact
{
    private:

        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;

    public :
        void    getter()
        {
            
        }
};


class PhoneBook
{
    private:
        Contact         contact[8];

    public:

        std::string     input;
        int             idx;

        std::string    show_menu()
        {
            std::cout << std::endl;
            std::cout << "Welcome PhoneBook System Choose the Menu" << std::endl;
            std::cout << std::endl;
            std::cout << "[1] ADD [2] SEARCH [3] EXIT" << std::endl;
            std::cin >> input;

            return input;
        }

        void            choose_menu(std::string input)
        {
            while (1)
            {
                if (input == "ADD")
                    return (ADD());
                else if(input == "SEARCH")
                {
                    std::cout << "Input the Index" << std::endl;
                    std::cin >> idx;
                    return (SEARCH(idx));
                }
                else if(input == "EXIT")
                    return (EXIT());
                else
                {
                    print_error();
                    return ;
                }
            }
        }

        void    execute_program()
        {
            while (1)
            {
                input = show_menu();
                choose_menu(input);
            }
            // add, search, exit 화면 띄어주기
            // show_menu;
        }

        std::string length_over_ten(std::string str)
        {
            std::string modify_last_ch(str);

            modify_last_ch.substr(0, 8);
            modify_last_ch.push_back('.');
            
            return modify_last_ch;
        }
        
        void    print_error()
        {
            std::cout << std::endl;
            std::cout << "Invalid Input. Try Again" << std::endl;
        }
        
        void    print_format(std:: string str)
        {
            std::cout << std::setw(10) << std::right << str ;
        }

        void    SEARCH(int idx)
        {
            // idx가 없는 경우에 대한 예외처리
            print_format(std::to_string(idx));
            std::cout << '|';
            contact[idx].first_name.length() < 10 ? print_format(contact[idx].first_name) : \
            print_format(length_over_ten(contact[idx].first_name));
            std::cout << '|';
            contact[idx].first_name.length() < 10 ? print_format(contact[idx].last_name) : \
            print_format(length_over_ten(contact[idx].last_name));
            std::cout << '|';
            contact[idx].first_name.length() < 10 ? print_format(contact[idx].nick_name) : \
            print_format(length_over_ten(contact[idx].nick_name));
        }

        void    ADD()
        {
            // idx 값 증가
            // idx 가 9를 초과했을 경우에 대한 예외처리
            std::cin >> contact[idx].first_name;
            std::cin >> contact[idx].last_name;
            std::cin >> contact[idx].nick_name;
            std::cin >> contact[idx].phone_number;
            std::cin >> contact[idx].darkest_secret;
            ++idx;
        }

        void    EXIT()
        {
            exit(0);
        }   
};
