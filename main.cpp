#include <iostream>

void getInput(std::string& name);
void setRows(std::string rows[3], std::string name);
void printGreeting(std::string rows[3]);

int main()
{
    std::string name;
    std::string rows[3];

    getInput(name);

    setRows(rows, name);

    printGreeting(rows);

    return 0;
}

void getInput(std::string& name)
{
    std::cin >> name;
}

void setRows(std::string rows[3], std::string name)
{
    rows[2] = "* Sveikas, " + name + "! *";

    rows[0] = "*";
    rows[1] = "*";
    for (int i = 0; i < rows[2].length() - 2; ++i) {
        rows[0] += "*";
        rows[1] += " ";
    }
    rows[0] += "*";
    rows[1] += "*";
}

void printGreeting(std::string rows[3])
{
    std::cout << rows[0] << std::endl
              << rows[1] << std::endl
              << rows[2] << std::endl
              << rows[1] << std::endl
              << rows[0] << std::endl;
}