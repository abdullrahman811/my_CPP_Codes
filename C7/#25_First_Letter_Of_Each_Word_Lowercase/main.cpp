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

void printLowerCase(string text)
{
    bool isFirstLetter = true;

    for (int i = 0; i < text.length(); i++)
    {   
        if (isFirstLetter && text[i] != ' ')
        {
            text[i] = tolower(text[i]);

            isFirstLetter = false;
        }

        isFirstLetter = (text[i] == ' ') ? true : false;

    }

    cout << text;
}

int main()
{
    printLowerCase(readText("\nPlease Enter Text:\n"));

    return 0;
}