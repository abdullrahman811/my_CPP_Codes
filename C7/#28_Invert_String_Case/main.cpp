#include <iostream>
#include <cctype>
#include <string>
#include "../../lib/all.hpp"

using namespace std;
using namespace all;

char invertLetterState(char c)
{
    return (isupper(c)) ? static_cast<char>(tolower(c)) : static_cast<char>(toupper(c)); 
}

string invertStringCase(std::string text)
{
				for (char &c : text)
				{
				    c = invertLetterState(c);
				}
				
				return text;
}

int main()
{
    cout << invertStringCase(readText("\nEnter String:\n"));

    return 0;
}