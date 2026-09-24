#include <iostream>
#include <string>
#include <vector>
#include "../../lib/all.hpp"

std::vector <std::string> splitString(std::string text, std::string delim)
{
    std::vector <std::string> vWords;
    int pos = 0;                //separator position
    std::string word;           //the word from string

    while ((pos = text.find(delim)) != std::string::npos)
    {
        word = text.substr(0, pos);

        text.erase(0, pos + delim.length());

        if (!word.empty())
        {
            vWords.push_back(word);
        }
    }

    if (!text.empty())
    {
        vWords.push_back(text);
    }
    
    return vWords;
}

int main()
{
    // Vars
    std::string text = all::readText(all::stringTitleCase("\n enter text:"));
    
    std::vector <std::string> vectorWords = splitString(text, " ");
    
    unsigned int count = vectorWords.size();
    // End Vars


    std::cout << "\nTokens: " << count;

    for (std::string &s : vectorWords)
    {
        std::cout << "\n" << s;
    }

    return 0;
}