#include <iostream>
#include <iomanip>

class Contact
{
    public:

        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
};


class PhoneBook
{
    private:
        Contact         contact[8];

    public:

        std::string     intput;
        int             idx;

        std::string length_over_ten(std::string str)
        {
            std::string modify_last_ch(str);

            modify_last_ch.substr(0, 8);
            modify_last_ch.push_back('.');
            
            return modify_last_ch;
        }
        
        void    error()
        {
            std::cout << "Invalid Input. Try Again" << std::endl;
        }
        
        void    SEARCH(int idx)
        {
            // idx 처리 아직 안함.
            contact[idx].first_name.length() > 10 ? std::cout << contact[idx].first_name  \
            : std::cout << length_over_ten(contact[idx].first_name);
            std::cout << '|';
            contact[idx].first_name.length() > 10 ? std::cout << contact[idx].last_name  \
            : std::cout << length_over_ten(contact[idx].last_name);
            std::cout << '|';
            contact[idx].first_name.length() > 10 ? std::cout << contact[idx].nick_name  \
            : std::cout << length_over_ten(contact[idx].nick_name);
            std::cout << '|';
        }

        void    ADD()
        {
            // if ninth contact is added, replace the oldest contact
            // one field at a time.
            std::cin >> contact[idx].first_name;
            std::cin >> contact[idx].last_name;
            std::cin >> contact[idx].nick_name;
            std::cin >> contact[idx].phone_number;
            std::cin >> contact[idx].darkest_secret;
        }

        void    EXIT()
        {
            exit(0);
        }   
};
