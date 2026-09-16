#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include "../../lib/all.hpp"

bool isVowel(char letter)
{
    letter = static_cast<unsigned char>(std::tolower(static_cast<unsigned char>(letter)));

    return (letter == 'a' || letter == 'o' || letter == 'u' || letter == 'e' || letter == 'i');
}

std::vector <char> vectorVowels(const std::string &text)
{
    std::vector <char> vecVowels;

    for (char c : text)
    {
        if (isVowel(c))
        {
            vecVowels.push_back(c);
        }
    }
    
    return vecVowels;
}

int main()
{
    std::string text = all::readText(all::stringTitleCase("\n enter text to count vowels in it:\n"));

    std::vector <char> vVowels = vectorVowels(text);

    std::cout << all::stringTitleCase("\n Vowels Found:");

    for (char c : vVowels)
    {
        std::cout << "\t" << c;
    }
    
    return 0;
} 