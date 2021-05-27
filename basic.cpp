#include <iostream>
#include <fstream>

int main()
{
    std::fstream file("../file.txt");

    if (file.is_open())
    {
        std::cout << file.rdbuf();
    }
}
