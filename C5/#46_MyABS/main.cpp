#include <iostream>  
#include <cmath>

using namespace std;

int readNumber(string message) 
{   
  int num = 0;   
  
  cout << message << endl;     
  cin >> num;

  return num;
}

unsigned int myABS(int num)
{
  if (num >= 0)
  {
    return num;
  }

  else
  {
    return (-1) * num;
  }
}

void maestro()
{
  int num = 0, absNum = 0;
  num = readNumber("\nEnter Number: ");

  absNum = myABS(num);

  cout << "\n\nMyAbsolute Number: " << absNum
       << "\nC++ Absolute Number: " << abs(num);
}

int main() 
{
  maestro();   
  return 0;
}
