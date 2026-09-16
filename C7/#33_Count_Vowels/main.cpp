#include <iostream>
#include <cctype>
#include <string>
#include "../../lib/all.hpp"

bool isVowel(char letter)
{
    letter = static_cast<unsigned char>(std::tolower(static_cast<unsigned char>(letter)));

    return (letter == 'a' || letter == 'o' || letter == 'u' || letter == 'e' || letter == 'i');
}

unsigned int countVowels(const std::string &text)
{
    unsigned int count = 0;

    for (char c : text)
    {
        if (isVowel(c))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    std::cout << std::endl << countVowels(all::readText(all::stringTitleCase("\n enter text to count vowels in it:\n")));

    return 0;
} 