#include "phonebook.hpp"

int main()
{
    std::string line;
    Contact obs[8];
    int index = 0;

    for (;;)
    {
        std::cout << "- ";
        std::getline(std::cin, line);
        for (int i = 0; i < (int)line.length(); i++)
            line[i] = (char)tolower(line[i]);
        if (line.compare("exit") == 0)
            break;
        else if (line.compare("add") == 0)
            add_contacts(obs, &index);
        else if (line.compare("search") == 0)
            search_contacts(obs, index);
    }
    return 0;
}
