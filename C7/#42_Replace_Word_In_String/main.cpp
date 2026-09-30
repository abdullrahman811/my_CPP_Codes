#include <iostream>
#include <string>
#include "../../lib/it.hpp"

std::string replaceWordBuiltIn(std::string text, const std::string &find, const std::string &replace)
{
    std::string tempString = "";

    int pos = 0;

    while ((pos = text.find(find)) != std::string::npos)
    {
        tempString = text.replace(pos, find.length(), replace);
    }
    
    return tempString;
}

int main()
{
    std::cout << replaceWordBuiltIn(it008e::Strings::toTitleCase("welcome to syria , syria is a nice country"), "Syria", "USA");

    return 0;
}