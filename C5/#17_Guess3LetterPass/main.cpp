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

void guessPassword(string password)
{
	string testPass = "   ";

	int counter = 0;

	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 'A'; j <= 'Z'; j++)
		{
			for (int k = 'A'; k <= 'Z'; k++)
			{
				testPass[0] = char(i);
				testPass[1] = char(j);
				testPass[2] = char(k);

				counter ++;

				if (testPass == password)
				{
					cout << "\nPassword Found! it is " << testPass << endl;
					cout << "Found After " << counter << " Trials.";	
					return ;
				}

				testPass = "   ";
			}
		}
	}
}

int main() {

	guessPassword(getPassword());

    return 0;
}
