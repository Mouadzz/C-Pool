#include "phonebook.hpp"

void add_contact(Contact obs[], int *index)
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

void print_index(int index, Contact obs[])
{
}

void search_contact(Contact obs[], int index)
{
    std::string line;

    std::cout << "     index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < index; i++)
    {
        std::cout << std::setw(10) << std::right << i << "|";
        if (obs[i].get_first_name().length() > 10)
            std::cout << std::right << obs[i].get_first_name().substr(0, 9) << "."
                      << "|";
        else
            std::cout << std::setw(10) << std::right << obs[i].get_first_name() << "|";

        if (obs[i].get_last_name().length() > 10)
            std::cout << std::right << obs[i].get_last_name().substr(0, 9) << "."
                      << "|";
        else
            std::cout << std::setw(10) << std::right << obs[i].get_last_name() << "|";

        if (obs[i].get_nickname().length() > 10)
            std::cout << std::right << obs[i].get_nickname().substr(0, 9) << "."
                      << "|";
        else
            std::cout << std::setw(10) << std::right << obs[i].get_nickname() << "|" << std::endl;
    }
    std::getline(std::cin, line);
    if (line.length() < 2 && line[0] >= '0' && line[0] <= '7')
    {
        print_index(stoi(line), obs);
    }
    else
        std::cout << "Invalid Index" << std::endl;
}

int main()
{
    std::string line;
    Contact obs[8];
    int index = 0;

    for (;;)
    {
        std::cout << "- ";
        std::getline(std::cin, line);
        if (line.compare("EXIT") == 0)
            break;
        else if (line.compare("ADD") == 0)
            add_contact(obs, &index);
        else if (line.compare("SEARCH") == 0)
            search_contact(obs, index);
    }
    return 0;
}
