#include <iostream>  
#include <cmath>

using namespace std;

float readNumber(string message) 
{   
  float num = 0;   
  
  cout << message << endl;     
  cin >> num;

  return num;
}

float myABS(float num)
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

float getFraction(float num)
{
  return myABS(num) - myABS(static_cast<int>(num));
}

float isFractionBig(float num)
{
  return getFraction(num) >= 0.5;
}

float myCeil(float num) {
  
  if (num < 0 || getFraction(num) == 0)
  {
    return static_cast<int>(num);
  }
  
  return static_cast<int>(num) + 1;
}

void maestro()
{
  float num = 0;
  num = readNumber("\nEnter Number: ");

  cout << "\n\nmyCeil Number: " << myCeil(num)
       << "\nC++ ceil Number: " << ceil(num);
}

int main() 
{
  maestro();   
  return 0;
}
