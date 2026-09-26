#include <iostream>
#include <string>
#include <vector>
#include "../../lib/it.hpp"

std::string joinString(const std::vector <std::string> &vWords, const std::string &delim = " ")
{
    std::string mergedText;
    bool isFirst = true;

    for (const std::string & s: vWords)
    {
        if (!isFirst)
            mergedText += delim
        ;
        
        mergedText += s;

        isFirst = false;
    }

    return mergedText;
}

int main()
{
    std::vector <std::string> vWords = {"hi", "how", "are", "you"};

    std::cout << it008e::Strings::toTitleCase("vector after join: ") << joinString(vWords);

    return 0;
}