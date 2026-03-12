#include <iostream>
using namespace std;

void readData(int a[100], int &length)
{
    cout << "Enter num of nums: ";
    cin >> length;

    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Enter num[" << i + 1 << "]\n";
        cin >> a[i];
    }
}

void printData(int a[100], int length)
{
    cout << "****************************\n";

    for (int i = 0; i <= length - 1; i++)
    {
        cout << "num[" << i + 1 << "] = " << a[i] << endl;
    }
}

int main()
{
    int arr[100];
    int length = 0;

    readData(arr, length);
    printData(arr, length);

    return 0;
}