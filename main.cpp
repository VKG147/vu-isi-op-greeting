#include <iostream>

void getInput(std::string& name);

int main()
{
    std::string name;
    std::string rows[5];

    getInput(name);

    return 0;
}

void getInput(std::string& name)
{
    std::cin >> name;
}
