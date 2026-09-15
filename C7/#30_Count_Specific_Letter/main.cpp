#include <iostream>
#include <cctype>
#include <string>
#include "../../lib/all.hpp"

unsigned int specificCharNum(const std::string &text, char letter)
{
    unsigned int count = 0;

    for (const char &c : text)
    {
        if (c == letter)
        {
            count++;
        }
    }
    
    return count;
}

int main()
{
    std::string text = all::readText(all::stringTitleCase("\n enter text:\n"));

    char letter = all::readChar(all::stringTitleCase("\n enter letter to find:\n"));

    std::cout << "\nLetter '" << letter << "' Found " << specificCharNum(text, letter) << " Times.";

    return 0;
}