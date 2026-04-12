#include <iostream>
#include <string>
using namespace std;


// Enums & Structs

enum enLevel { easy, med, hard, mixed };

enum enOpType { add, sub, mult, divide, mix };

enum enResult { pass, fail };

struct stData
{
    short totalQuestions = 0;
    short correctAnswers = 0;
    short wrongAnswers = 0;
    short userAnswers[100];

    enLevel level;
    enOpType op;
    enResult result;
    string questions[100];
};


// Functions

int readNumber(string message)
{
    int num = 0;

    cout << message;
    cin >> num;

    return num;
}

int randomNumber(int from, int to)
{
    int ranNum = rand() % (to - from + 1) + from;

    return ranNum;
}

int randomNumberLevel(enLevel level)
{
    int from, to;

    switch (level)
    {
    case easy:
        from = 1, to = 10;
        break;
    
    case med:
        from = 10, to = 50;
        break;

    case hard:
        from = 50, to = 100;
        break;

    case mixed:
        from = 1, to = 100;
        break;

    default:
        break;
    }

    return randomNumber(from, to);
}

enOpType mixOperation()
{
    return static_cast<enOpType>(randomNumber(0, 3));
}

float calcMath(float num1, float num2, enOpType op)
{
    switch (op)
    {
    case add:
        return num1 + num2;
    case sub:
        return num1 - num2;       
    case mult:
        return num1 * num2;
    case divide:
        return num1 / num2;
    default:
        return 0;
        break;
    }
}

char operation(enOpType newOp)
{
    char op[4] = {'+', '-', '*', '/'};

    return op[newOp];
}

string problemStoring(int num1, int num2, enOpType op)
{
    return to_string(num1) + operation(op) + to_string(num2);
}

void printGreenText(string text)
{
    cout << "\033[32m"
    << text
    << "\033[0m";
}

void printRedText(string text)
{
    cout << "\033[31m"
    << text
    << "\033[0m";
}

void startQuestion(stData &data, int i)
{
    int num1, num2, result, userAns;

    enOpType newOp;
    if (data.op == mix)
    {
        newOp = mixOperation();
    }
    else
    {
        newOp = data.op;
    }
    
    num1 = randomNumberLevel(data.level);
    num2 = randomNumberLevel(data.level);
        
    if (newOp == divide)
    {
        while (num2 == 0)
        {
            num2 = randomNumberLevel(data.level);
        }
    }        

    result = calcMath(num1, num2, newOp);

    data.questions[i - 1] = problemStoring(num1, num2, newOp);

    cout << "\n" << num1
         << "\n" << num2 << "  " << operation(newOp)
         << "\n_______________";
    
    userAns = readNumber("\n");
    data.userAnswers[i - 1] = userAns;

    if (userAns == result)
    {
        printGreenText("\nCorrect Ans! .)");
        data.correctAnswers++;
    }
    else
    {
        string text = "\n Wrong Answer! .( \n The Correct Answer Is: " + to_string(result);

        printRedText(text);
        
        data.wrongAnswers++;
    }
}

string operationString(enOpType op)
{
    string stringOp[5] = { "Addition", "Subtraction", "Multiplication", "Dividion", "Mixed" };
    return stringOp[op];
}

string levelString(enLevel level)
{
    string stringLevel[4] = { "Easy", "Med", "Hard", "Mixed" };
    return stringLevel[level];
}

void printHistory(stData data)
{
    char history = ' ';
    cout << "\n\nPrint History? y/n: ";
    
    cin >> history;

    if (history == 'y' || history == 'Y')
    {
        cout << "\n\n_______________"
        << "\nHistory: "
        << "\n_______________";
        
        for (int i = 0; i <= data.totalQuestions - 1; i++)
        {
            cout << endl << i << ". " << data.questions[i] << " = " << data.userAnswers[i];
        }        
    }    
}

void printResults(stData data)
{
    cout << "\n____________________"
         << "\nFinal Results: "
         << "\n____________________"
         << "\nTotal Questions: " << data.totalQuestions
         << "\nLevel: " << levelString(data.level)
         << "\nOperation: " << operationString(data.op)
         << "\nCorrect Answers: " << data.correctAnswers
         << "\nWrong Answers: " << data.wrongAnswers;
}

void resetScreen()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void startRound()
{
        stData data;
        
        data.totalQuestions = readNumber("\nEnter Total Questions: ");
        data.level = static_cast<enLevel>(readNumber("\n\nEnter Level: Easy[0], Med[1], Hard[2], Mixed[3]: "));
        data.op = static_cast<enOpType>(readNumber("\n\nEnter Operation: Addition[0], Subtraction[1], Multiplication[2], Dividion[3], Mixed[4]: "));
        
        for (int i = 1; i <= data.totalQuestions; i++)
        {
            cout << "\n\nQuestion [" << i << "/" << data.totalQuestions << "]:";
            
            startQuestion(data, i);
        }
        
        printResults(data);
        
        printHistory(data);
}

void startGame()
{
    char again = ' ';

    do
    {   
        resetScreen();
        startRound();

        cout << "\n\n\t Do You Want To Play Again? Y/n: ";
        cin >> again;
        
    } while (again == 'y' || again == 'Y');
}

int main()
{
    srand((unsigned)time(NULL));
    startGame();

    return 0;
}