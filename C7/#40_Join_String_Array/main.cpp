#include <iostream>
#include <string>
#include <vector>
#include "../../lib/it.hpp"

std::string joinString(const std::string words[], unsigned int arrLength, const std::string &delim = " ")
{
    std::string mergedText;
    bool isFirst = true;

    for (unsigned int i = 0; i < arrLength; i++)
    {
        if (!isFirst)
            mergedText += delim
        ;
        
        mergedText += words[i];
    
        isFirst = false;        
    }

    return mergedText;
}

int main()
{
    std::string words[] = {"hi", "how", "are", "you"};

    std::cout << it008e::Strings::toTitleCase("array after join: ") << joinString(words, 4, " ");

    return 0;
}