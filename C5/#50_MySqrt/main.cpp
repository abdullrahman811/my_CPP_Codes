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

float mySqrt(float num)
{
  if (num < 0)
  {
    return -1;
  }
  
  if (num == 0)
  {
    return 0;
  }
  
  return pow(num, 0.5);
}

void maestro()
{
  float num = 0;
  num = readNumber("\nEnter Number: ");

  cout << "\n\nmySqrt Number: " << mySqrt(num)
       << "\nC++ Sqrt Number: " << sqrt(num);
}

int main() 
{
  maestro();   
  return 0;
}
