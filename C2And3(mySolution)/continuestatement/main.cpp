#include <iostream>
using namespace std;

int main()
{
    int i = 1, n = 0, sum = 0;
    do
    {
        cout << "Please Enter n : ";
        cin >> n;
        i++;

        if (n >= 50){
            continue;
        }

        sum += n;
        
    } while (i <= 5);

    cout << endl << sum << endl;
    

    return 0;
}