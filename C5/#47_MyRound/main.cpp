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

float myRound(float num)
{
  if (isFractionBig(num))
  {
    if (num > 0)
    {
      return static_cast<int>(num) + 1;
    }
    
    else if (num < 0)
    {
      return static_cast<int>(num) - 1;
    }
    
    else
    {
      return 0;
    }    
  }
  
  else
  {
    return static_cast<int>(num);    
  }
}

void maestro()
{
  float num = 0;
  num = readNumber("\nEnter Number: ");

  cout << "\n\nMyRound Number: " << myRound(num)
       << "\nC++ round Number: " << round(num);
}

int main() 
{
  maestro();   
  return 0;
}
