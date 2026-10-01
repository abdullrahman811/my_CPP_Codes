#include <iostream>
#include <string>
#include "../../lib/it.hpp"

std::string replaceWord(const std::string &text, const std::string &find, const std::string &replace, bool matchCase = true)
{
    if (text.empty())
    {
        return text;
    }
    
    std::vector <std::string> vWords = it008e::Strings::splitString(text);

    for (std::string &s : vWords)
    {
        if (matchCase)
        {
            if (s == find)
            {
                s = replace;
            }
        }

        else 
        {
            if (it008e::Strings::toLowerCase(s) == it008e::Strings::toLowerCase(find))
            {
                s = replace;
            }
        }
    }
    
    return it008e::Strings::joinString(vWords);

}

int main()
{
    std::cout << replaceWord("welcome to syria , Syria is a nice country", "syria", "USA", false);
    return 0;
}