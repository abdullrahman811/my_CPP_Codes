#include <iostream>
using namespace std;

int readPositiveNumber(string message)
{
    int num;

    do
    {
        cout << endl
             << message;
        cin >> num;
    } while (num <= 0);

    return num;
}

bool isPass(int mark)
{
    return (mark >= 60);
}

void readMarksAll(int studentsMark[], int stNum)
{
    for (int i = 0; i <= stNum - 1; i++)
    {
        studentsMark[i] = readPositiveNumber("Please Enter Student Mark: ");
    }
}

int numOfPass(int studentsMarks[], int stNum)
{
    int sum = 0;

    for (int i = 0; i < stNum; i++)
    {

        if (isPass(studentsMarks[i]))
        {
            sum += 1;
        }
    }

    return sum;
}

void printResults(int numofpass, int stnums)
{
    cout << "\n____________________________________________\n";
    cout << "\nNumber Of Pass  : " << numofpass;
    cout << "\nNumber Of Fail  : " << stnums - numofpass;
    cout << "\nPass Percentage = " << static_cast<float>(numofpass * 100) / stnums;
}

int main()
{
    int studentsNumber = readPositiveNumber("Please Enter Students Number: ");
    int arrStudentMark[studentsNumber];
    int numofpass = 0;

    readMarksAll(arrStudentMark, studentsNumber);

    numofpass = numOfPass(arrStudentMark, studentsNumber);

    printResults(numofpass, studentsNumber);

    return 0;
}