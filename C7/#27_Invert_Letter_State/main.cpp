#include <iostream>
#include <cctype>
#include <string>

using namespace std;

char readChar(std::string message)
{
    char c;

    std::cout << message;
    std::cin >> c;

    return c;
}

char invertLetterState(char c)
{
    return (isupper(c)) ? static_cast<char>(tolower(c)) : static_cast<char>(toupper(c)); 
}

int main()
{
    cout << invertLetterState(readChar("\nEnter Character:\n"));

    return 0;
}