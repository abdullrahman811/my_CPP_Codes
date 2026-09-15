#include <iostream>
#include <cctype>
#include <string>
#include "../../lib/all.hpp"

enum enCharType { lower, upper, none };

unsigned int numOfSmall(std::string text)
{
    unsigned int small = 0;

    for (char& c : text)
    {
        (std::islower(c)) ? ++small : small;
    }

    return small;
}

unsigned int numOfCapital(std::string text)
{
    unsigned int capital = 0;

    for (char& c : text)
    {
        (std::isupper(c)) ? ++capital : capital;
    }

    return capital;
}

unsigned int charNum(const std::string& text, enCharType type = enCharType::none)
{
    switch (type)
    {
    case enCharType::lower:
        return numOfSmall(text);

    case enCharType::upper:
        return numOfCapital(text);

    default:
        return text.length();
    }

    return text.length();
}

int main()
{
    std::string text = all::readText("\nEnter Text:\n");

    std::cout << "\nText Length: " << charNum(text);
    std::cout << "\nText Capital Letters Count: " << charNum(text, upper);
    std::cout << "\nText Small Letters Count: " << charNum(text, lower);

    return 0;
}