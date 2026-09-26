#include <iostream>
#include <string>
#include <vector>
#include "../../lib/it.hpp"

std::vector <std::string> reverseStringVector(const std::vector <std::string> &vString)
{
    std::vector <std::string> vReverse;
    
    for (int i = vString.size() - 1; i >= 0; i--)
    {
        vReverse.push_back(vString[i]);
    }
    
    return vReverse;
}

std::string reverseStringWords(const std::string &toReverse)
{
    return it008e::Strings::joinString(reverseStringVector(it008e::Strings::splitString(toReverse)));
}

int main()
{
    std::string text = "hi how are you doing today?";

    std::cout << text << std::endl;

    std::cout << reverseStringWords(text);

    return 0;
}