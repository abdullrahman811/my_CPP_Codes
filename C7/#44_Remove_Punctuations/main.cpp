#include <iostream>
#include <string>
#include "../../lib/it.hpp"

std::string removePunctuations(const std::string &text)
{
    std::string temp = "";

    for (char c : text)
    {
        if (!std::ispunct(c))
        {
            temp += c;
        }
    }
    
    return temp;
}

int main()
{
    std::string text = "Hi, I am Ahmad's son.";

    std::cout << std::endl << text << std::endl << removePunctuations(text);
    
    return 0;
}