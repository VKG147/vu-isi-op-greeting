#include <iostream>

int getInput(std::string& name, int& row_count);
void setRows(std::string rows[3], std::string name);
void printGreeting(std::string name, int row_count);
bool isMale(std::string name);

int main()
{
    std::string name;
    int row_count;

    getInput(name, row_count);

    printGreeting(name, row_count);

    return 0;
}

int getInput(std::string& name, int& row_count)
{
    std::cout << "Please enter your name: " << std::endl;
    std::cin >> name;

    do {
        std::cout << "Please enter the row count of the frame (odd number):" << std::endl;
        std::cin >> row_count;
    } while(!std::cin || row_count < 3 || row_count > 150);

    if (row_count % 2 == 0) row_count--;

    return 0;
}

void setRows(std::string rows[3], std::string name)
{
    if (isMale(name)) {
        rows[2] = "* Sveikas, " + name + "! *";
    }
    else {
        rows[2] = "* Sveika, " + name + "! *";
    }

    rows[0] = "*";
    rows[1] = "*";
    for (int i = 0; i < rows[2].length() - 2; ++i) {
        rows[0] += "*";
        rows[1] += " ";
    }
    rows[0] += "*";
    rows[1] += "*";
}

void printGreeting(std::string name, int row_count)
{
    std::string rows[3];
    setRows(rows, name);

    std::cout << rows[0] << std::endl;

    for (int i = 0; i < (row_count - 3)/2; ++i) {
        std::cout << rows[1] << std::endl;
    }

    std::cout << rows[2] << std::endl;

    for (int i = 0; i < (row_count - 3)/2; ++i) {
        std::cout << rows[1] << std::endl;
    }

    std::cout << rows[0] << std::endl;
}

bool isMale(std::string name)
{
    if (name[name.length()-1] == 's' || name[name.length()-1] == 'S') {
        return true;
    }
    return false;
}
