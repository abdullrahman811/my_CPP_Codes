#include <iostream>
#include <string>
#include "../../lib/all.hpp"

void printEachWordString(std::string text)
{
    std::string delim = " ";    //separator of words
    int pos = 0;                //separator position
    std::string word;           //the word from string

    while ((pos = text.find(delim)) != std::string::npos)   //find separator position, if equal to npos "not found", break
    {
        word = text.substr(0, pos);                         //word is first word in string until the first separator

        text.erase(0, pos + delim.length());                //erase word and separator

        if (!word.empty())                                  //print the word if not empty
        {
            std::cout << word << "\n";
        }
    }

    if (!text.empty())          //last word may not have a separator after it, so print it manually
    {
        std::cout << text << "\n";
    }
}

int main()
{
    std::string text = all::readText(all::stringTitleCase("\n enter text:"));

    printEachWordString(text);

    return 0;
}