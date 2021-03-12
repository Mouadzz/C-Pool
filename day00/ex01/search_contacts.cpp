#include "phonebook.hpp"

void search_contacts(Contact obs[], int index)
{
    std::string line;

    if (index > 0)
        std::cout << "\n|     index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < index; i++)
    {
        std::cout << "|";
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
    if (index > 0)
    {
        std::cout << "\nEnter an index : ";
        std::getline(std::cin, line);
        std::cout << std::endl;
        if (line.length() < 2 && line[0] >= '0' && line[0] <= '7' && stoi(line) < index)
            print_contacts(stoi(line), obs);
        else
            std::cout << "Invalid Index" << std::endl;
    }
    else
        std::cout << "No Contacts Found !" << std::endl;
}