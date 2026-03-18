#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

enum enRandomType {
  smallLetter = 1,
  capitalLetter = 2,
  special = 3,
  digit = 4
};

int readNum(string text) {
  int num = 0;

  do {
    cout << text << endl;
    cin >> num;
  } while (num <= 0);

  return num;
}

int randomNumber(int from, int to) {
  int ranNum = rand() % (to - from + 1) + from;

  return ranNum;
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

string genKey() {
  string key = "";

  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= 4; j++) {
      key += randomChar(capitalLetter);
    }

    if (key.length() <= 16) {
      key += '-';
    }
  }

  return key;
}

void keysGen(int numOfKeys) {
  for (int i = 1; i <= numOfKeys; i++) {
    cout << "\nKey [" << i << "]: " << genKey();
  }
}

void boss() {
  int numOfKeys = readNum("Please Enter Number Of Keys To Generate: ");

  keysGen(numOfKeys);
}

int main() {
  srand((unsigned)time(NULL));

  boss();

  return 0;
}
