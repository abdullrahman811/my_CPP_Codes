#include <iostream>
#include <string>

using namespace std;

string readText()
{
    string text;
    cout << "Please Enter Text: ";
    getline(cin, text);

    return text;
}

string encryptText(string text, short key)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] += key;
    }
    
    return text;
}

string decryptText(string text, short key)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] -= key;
    }
    
    return text;
}

void bossFunction()
{
    string text, decrypted, encrypted;
    const short key = 2;
    
    text = readText();

    encrypted = encryptText(text, key);
    
    decrypted = decryptText(encrypted, key);


    cout << "\n Original Text  : " << text
         << "\n Encrypted Text : " << encrypted
         << "\n Decrypted Text : " << decrypted;
}

int main()
{
    bossFunction();

    return 0;
}