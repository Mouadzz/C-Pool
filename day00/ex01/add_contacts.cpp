/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contacts.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:06:45 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/03 14:08:13 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void add_contacts(Contact obs[], int *index)
{
    std::string line;

    if (*index < 8)
    {
        std::cout << "First Name: ";
        std::getline(std::cin, line);
        obs[*index].set_first_name(line);

        std::cout << "Last Name: ";
        std::getline(std::cin, line);
        obs[*index].set_last_name(line);

        std::cout << "Nickname: ";
        std::getline(std::cin, line);
        obs[*index].set_nickname(line);

        std::cout << "Login: ";
        std::getline(std::cin, line);
        obs[*index].set_login(line);

        std::cout << "Postal Address : ";
        std::getline(std::cin, line);
        obs[*index].set_postal_adress(line);

        std::cout << "Email Address: ";
        std::getline(std::cin, line);
        obs[*index].set_email_address(line);

        std::cout << "Phone Number: ";
        std::getline(std::cin, line);
        obs[*index].set_phone_number(line);

        std::cout << "Birthday Date: ";
        std::getline(std::cin, line);
        obs[*index].set_birthday_date(line);

        std::cout << "Favorite Meal : ";
        std::getline(std::cin, line);
        obs[*index].set_favorite_meal(line);

        std::cout << "Underwear Color: ";
        std::getline(std::cin, line);
        obs[*index].set_underwear_color(line);

        std::cout << "Darkest Secret: ";
        std::getline(std::cin, line);
        obs[*index].set_darkest_secret(line);

        std::cout << "\nContact was successfully added." << std::endl;
        *index += 1;
    }
    else
        std::cout << "Full !" << std::endl;
}
