#include <iostream>

using namespace std;

enum enRandomType {
  smallLetter = 1,
  capitalLetter = 2,
  special = 3,
  digit = 4
};

int readPositiveNumber(string message)
{
    int num = 0;

    do
    {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);

    return num;
}

int randomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char randomChar(enRandomType type) {
  switch (type) {
  case smallLetter:
    return char(randomNumber(97, 122));
    break;

  case capitalLetter:
    return char(randomNumber(65, 90));
    break;

  case special:
    return char(randomNumber(33, 47));
    break;

  case digit:
    return char(randomNumber(48, 57));
    break;

  default:
    break;
  }

  return '\0';
}

string genWord(enRandomType type, short length) {
  string word = "";

  for (int i = 1; i <= length; i++) {
    word += randomChar(type);
  }

  return word;
}

string genKeyWord4(enRandomType type, short wordNum) {
  string key = "";

  for (int i = 1; i <= wordNum; i++) {
    key += genWord(type, 4);

    if (i < wordNum) {
      key += '-';
    }
  }

  return key;
}

void keysArray(string array[100], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        array[i] = genKeyWord4(capitalLetter, 4);
    }
}

void printArray(string array[100], int arraySize)
{

    for (int i = 0; i < arraySize; i++)
    {
        cout << "\nArray [" << i << "]: " << array[i];
    }
    
}

void maestro()
{
    string array[100]; 
    int arraySize;
    
    arraySize = readPositiveNumber("\nEnter Array Elements Number: ");

    keysArray(array, arraySize);
    
    cout << "\nArray Elements: ";
    
    printArray(array, arraySize);

}

int main()
{
    srand((unsigned)time(NULL));

    maestro();

    return 0;
}