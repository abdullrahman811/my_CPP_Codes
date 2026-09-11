#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string readText(string prompt)
{
    string text;

    cout << prompt;
    getline(cin, text);

    return text;
}

string stringLowerCase(string text)
{
    for (char &c : text)
    {
        c = tolower(c);
    }

    return text;
}

string stringUpperCase(string text)
{
    for (char &c : text)
    {
        c = toupper(c);
    }

    return text;
}

int main()
{
    string text = readText("\nPlease Enter Text:\n");

    cout << "\nLower Case: " << stringLowerCase(text);

    cout << "\nUpper Case: " << stringUpperCase(text);
    
    return 0;
}