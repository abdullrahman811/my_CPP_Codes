#include <iostream>

using namespace std;

int main(){
    int arr[10] = { 10, 20, 44, 55, 33, 22, 99, 88, 99, 100 };

    for (int i = 0; i <= 10; i++)
    {
        if (arr[i] == 20)
        {
            cout << "Found On Position : " << i << endl;
            break;
        }
        
    }

    return 0;
}