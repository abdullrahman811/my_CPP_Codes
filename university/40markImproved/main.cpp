#include <iostream>
#include <string>
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
    for (int i = 0; i < stNum; i++)
    {
        cout << "Please Enter Student Mark " << (i + 1) << ": ";
        cin >> studentsMark[i];
    }
}

int countNumOfPass(const int studentsMarks[], int stNum)
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

int calculateNumOfFail(int totalStudents, int numOfPassingStudents)
{
    return totalStudents - numOfPassingStudents;
}

float calculatePassPercentage(int totalStudents, int numOfPassingStudents)
{
    if (totalStudents == 0)
    {
        return 0.0f;
    }
    return (static_cast<float>(numOfPassingStudents * 100) / totalStudents);
}

float calculateFailPercentage(int totalStudents, int numOfFailingStudents)
{
    if (totalStudents == 0)
    {
        return 0.0f;
    }
    return (static_cast<float>(numOfFailingStudents * 100) / totalStudents);
}

void printStudentResultsReport(int totalStudents, int passingStudents, int failingStudents, float passPercentage, float failPercentage)
{
    cout << "\n____________________________________________\n";
    cout << "\nTotal Students  : " << totalStudents;
    cout << "\nNumber Of Pass  : " << passingStudents;
    cout << "\nNumber Of Fail  : " << failingStudents;
    cout << "\nPass Percentage = " << passPercentage << "%";
    cout << "\nFail Percentage = " << failPercentage << "%";
    cout << "\n____________________________________________\n";
}

void generateStudentReport(const int studentsMark[], int studentsNumber)
{
    int numOfPassStudents = countNumOfPass(studentsMark, studentsNumber);
    int numOfFailStudents = calculateNumOfFail(studentsNumber, numOfPassStudents);
    float passPct = calculatePassPercentage(studentsNumber, numOfPassStudents);
    float failPct = calculateFailPercentage(studentsNumber, numOfFailStudents);

    printStudentResultsReport(studentsNumber, numOfPassStudents, numOfFailStudents, passPct, failPct);
}

int main()
{
    int studentsNumber = readPositiveNumber("Please Enter Students Number: ");
    int arrStudentMark[studentsNumber];
    readMarksAll(arrStudentMark, studentsNumber);

    generateStudentReport(arrStudentMark, studentsNumber);

    return 0;
}