/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:52:29 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/15 17:08:21 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string.h>
 
class Contact {

    public:
        std::string get_First_Name();
        std::string get_Last_Name();
        std::string get_Nick_Name();
        std::string get_Phone_Number();
        std::string get_Darkest_Secret();
        void        set_First_Name(std::string str);
        void        set_Last_Name(std::string str);
        void        set_Nick_Name(std::string str);
        void        set_phone_Number(std::string str);
        void        set_Darkest_Secret(std::string str);
    
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;

};

#endif