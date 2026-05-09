#include <iostream>
#include <vector>
#include "../lib/all.hpp"

using namespace std;
using namespace all;

void readNumAddVec(vector <int> &vVec)
{
  short yes = 0;
  
  do
  {
    int num = 0;
    num = readNumber("\nEnter Number: ", "\nNot A Valid Number, Enter Number:");
    vVec.push_back(num);
    
    yes = readNumber("\nDo You Want To Enter Another Number? 0/1 : ", "\nNot A Valid Number, Enter Number 0/1:");
  }while(yes);
}

void printVec(vector <int> &vVec)
{
  for (int &num : vVec)
  {
    cout << "\n"
         << num;
  }
}

int main() {
    vector <int> vNum;
    
    readNumAddVec(vNum);
    
    printVec(vNum);
    return 0;
}