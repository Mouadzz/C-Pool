#include <iostream>
#include <string>

void add_contact()
{
}

void search_contact()
{
}

int main()
{
    std::string line;

    for (;;)
    {
        std::cin >> line;
        if (line.compare("EXIT") == 0)
            break;
        else if (line.compare("ADD") == 0)
            add_contact();
        else if (line.compare("SEARCH") == 0)
            search_contact();
    }
    return 0;
}
