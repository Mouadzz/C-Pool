#include "phonebook.hpp"

void add_contact(Contact obs)
{
    std::string line;

    std::cout << "First Name: ";
    std::cin >> line;
    obs.set_first_name(line);

    std::cout << "Last Name: ";
    std::cin >> line;
    obs.set_last_name(line);

    std::cout << "Nickname: ";
    std::cin >> line;
    obs.set_nickname(line);

    std::cout << "Login: ";
    std::cin >> line;
    obs.set_login(line);

    std::cout << "Postal Address : ";
    std::cin >> line;
    obs.set_postal_adress(line);

    std::cout << "Email Address: ";
    std::cin >> line;
    obs.set_email_address(line);

    std::cout << "Phone Number: ";
    std::cin >> line;
    obs.set_phone_number(line);

    std::cout << "Birthday Date: ";
    std::cin >> line;
    obs.set_birthday_date(line);

    std::cout << "Favorite Meal : ";
    std::cin >> line;
    obs.set_favorite_meal(line);

    std::cout << "Underwear Color: ";
    std::cin >> line;
    obs.set_underwear_color(line);

    std::cout << "Darkest Secret: ";
    std::cin >> line;
    obs.set_darkest_secret(line);

    std::cout << "\nContact was successfully added." << std::endl;
}

void search_contact(Contact obs, int index)
{
    std::cout << index << "|" << obs.get_first_name() << "|" << obs.get_last_name() << "|" << obs.get_nickname() << std::endl;
}

int main()
{
    std::string line;
    Contact obs[8];

    for (;;)
    {
        std::cout << "- ";
        std::cin >> line;
        if (line.compare("EXIT") == 0)
            break;
        else if (line.compare("ADD") == 0)
        {
            add_contact(obs[0]);
        }
        else if (line.compare("SEARCH") == 0)
        {
            for (int i = 0; i < 8; i++)
                search_contact(obs[i], i);
        }
    }
    return 0;
}
