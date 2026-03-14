#include <iostream>
#include <string>
using namespace std;

string getPassword()
{
	string pass;
	
	cout << "Enter Password to find: " << endl;
	getline(cin, pass);

	return pass;
}

void printLettersFromAAAtoZZZ(string password)
{
	string testPass = "   ";
	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 'A'; j <= 'Z'; j++)
		{
			for (int k = 'A'; k <= 'Z'; k++)
			{
				testPass[0] = char(i);
				testPass[1] = char(j);
				testPass[2] = char(k);

				if (testPass == password)
				{
					cout << "\nPassword Found! it is " << testPass << endl;	
					return ;
				}

				testPass = "   ";
			}
		}
	}
}

int main() {

	printLettersFromAAAtoZZZ(getPassword());

    return 0;
}
