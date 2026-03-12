#include <iostream>
using namespace std;

void printWordsFromAAAtoZZZ()
{
    string word = "";

    for (int i = 'A'; i <= 'Z'; i++)
    {
        for (int j = 'A'; j <= 'Z'; j++)
        {
            for (int k = 'A'; k <= 'Z'; k++)
            {
                word += char(i);
                word += char(j);
                word += char(k);

                cout << word;

                word = "";
                
                cout << "\n";
            }

        }
        
    }
    
}

int main()
{
    printWordsFromAAAtoZZZ();
    return 0;
}