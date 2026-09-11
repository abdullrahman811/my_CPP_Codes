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

void printUpperCase(string text)
{
    bool isFirstLetter = true;

    for (int i = 0; i < text.length(); i++)
    {   
        if (isFirstLetter && text[i] != ' ')
        {
            text[i] = toupper(text[i]);

            isFirstLetter = false;
        }

        isFirstLetter = (text[i] == ' ') ? true : false;

    }

    cout << text;
}

int main()
{
    printUpperCase(readText("\nPlease Enter Text:\n"));

    return 0;
}