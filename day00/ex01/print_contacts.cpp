#include "phonebook.hpp"


void print_contacts(int index, Contact obs[])
{
    std::cout << "First Name      : " << obs[index].get_first_name() << std::endl;
    std::cout << "Last Name       : " << obs[index].get_last_name() << std::endl;
    std::cout << "Nickname        : " << obs[index].get_nickname() << std::endl;
    std::cout << "Login           : " << obs[index].get_login() << std::endl;
    std::cout << "Postal Address  : " << obs[index].get_postal_adress() << std::endl;
    std::cout << "Email Address   : " << obs[index].get_email_address() << std::endl;
    std::cout << "Phone Number    : " << obs[index].get_phone_number() << std::endl;
    std::cout << "Birthday Date   : " << obs[index].get_birthday_date() << std::endl;
    std::cout << "Favorite Meal   : " << obs[index].get_favorite_meal() << std::endl;
    std::cout << "Underwear Color : " << obs[index].get_underwear_color() << std::endl;
    std::cout << "Darkest Secret  : " << obs[index].get_darkest_secret() << std::endl;
}