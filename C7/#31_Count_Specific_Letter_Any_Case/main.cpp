#include <iostream>
#include <cctype>
#include <string>
#include "../../lib/all.hpp"

unsigned int specificCharNum(const std::string &text, char letter, bool matchCase = true)
{
    unsigned int count = 0;

    char iLetter = all::invertLetterState(letter);

    for (const char &c : text)
    {
        if ((c == letter) || (c == iLetter && !matchCase)) //counter letter equals
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

    std::cout << "\nLetter '" << letter << "' Or '" << all::invertLetterState(letter) << "' Found " << specificCharNum(text, letter, false) << " Times.";

    return 0;
} 