#include <iostream>
#include <cctype>
#include <string>
#include "../../lib/all.hpp"

bool isVowel(char letter)
{
    letter = static_cast<unsigned char>(std::tolower(static_cast<unsigned char>(letter)));

    return (letter == 'a' || letter == 'o' || letter == 'u' || letter == 'e' || letter == 'i');
}

int main()
{
    char letter = all::readChar(all::stringTitleCase("\n enter a letter to check:\n"));

    std::cout << std::endl << isVowel(letter);
    return 0;
} 