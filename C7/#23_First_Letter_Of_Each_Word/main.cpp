#include <iostream>

using namespace std;

string readText(string prompt)
{
    string text;

    cout << prompt;
    getline(cin, text);

    return text;
}

void printFirstLetters(string text)
{
    bool isFirstLetter = true;

    for (int i = 0; i < text.length(); i++)
    {
        if (isFirstLetter && text[i] != ' ')
        {
            cout << text[i] << "\t";

            isFirstLetter = false;
        }

        isFirstLetter = (text[i] == ' ') ? true : false;
    }
}

int main()
{
    

    printFirstLetters(readText("\nPlease Enter Text: \n"));
}