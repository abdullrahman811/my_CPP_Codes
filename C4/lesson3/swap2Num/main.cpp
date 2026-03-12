#include <iostream>
using namespace std;

void readNums(int nums[2]){
    for (int i = 0; i < 2; i++)
    {
        cout << "Please Enter Number " << i + 1 << ": \n";
        cin >> nums[i];
    }
}

void swapfn(int nums[2]){
    int temp;

    temp = nums[0];

    nums[0] = nums[1];
    nums[1] = temp;

}

void print(int nums[2]){
    for (int i = 0; i < 2; i++)
    {
        cout << "Number " << i + 1 << " Now Is : " << nums[i] << "\n";
    }
}

int main(){
    int nums[2];

    readNums(nums);
    swapfn(nums);
    print(nums);

    return 0;
}