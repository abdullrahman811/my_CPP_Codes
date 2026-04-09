// C++ Header
#include <iostream>
#include <ctime> 
using namespace std;


// Enums
enum enChoices     { rock = 1, paper = 2, scissor = 3 };
enum enRoundStatus { win = 1 , draw = 2 , loss = 3 };


// Functions And Procedures
short readRounds()
{
  short rounds;

  do
  {
    cout << "\nEnter How Many Rounds: ";
    cin >> rounds;

  } while (rounds < 1 || rounds > 10);
  

  return rounds;
}

enChoices readChoice()
{
  short choice;

  cout << "\nEnter Your Choice: [1]Rock, [2]Paper, [3]Scissor : ";
  cin >> choice;

  return static_cast<enChoices>(choice);
}

enChoices randomChoice()
{
  int ranNum = rand() % (3 - 1 + 1) + 1;

  return static_cast<enChoices>(ranNum);
}

enRoundStatus roundStart(enChoices &userChoice, enChoices &computerChoice)
{
  userChoice = readChoice();

  computerChoice = randomChoice();

  if (userChoice == computerChoice)
  {
    return draw;
  }

  // Rock Possibilities
  else if (userChoice == rock && computerChoice == paper)
  {
    return loss;
  }
  else if (userChoice == rock && computerChoice == scissor)
  {
    return win;
  }

  // Paper Possibilities  
  else if (userChoice == paper && computerChoice == rock)
  {
    return win;
  }
  else if (userChoice == paper && computerChoice == scissor)
  {
    return loss;
  }
  
  // Scissors Possibilities
  else if (userChoice == scissor && computerChoice == rock)
  {
    return loss;
  }
  else if (userChoice == scissor && computerChoice == paper)
  {
    return win;
  }

  return draw;
}

string choicesToString(enChoices choice)
{
  switch (choice)
  {
  case rock:
    return "Rock";
    break;
  
  case paper:
    return "Paper";
    break;

  case scissor:
    return "Scissors";
    break;

  default:
    return " ";
    break;
  }
}

string statusToString(enRoundStatus status)
{
  switch (status)
  {
  case win:
    return "Win";
    break;
  
  case loss:
    return "Loss";
    break;

  case draw:
    return "Draw";
    break;

  default:
    return " ";
    break;
  }
}

void printRoundStatus(enChoices user, enChoices computer, enRoundStatus status)
{
  // Colors
  if (status == draw)
  {
    cout << "\033[33m";
  }

  else if (status == loss)
  {
    cout << "\033[31m";
  }

  else
  {
    cout << "\033[32m";
  }

  cout << "\n\tPlayer  Choice : " << choicesToString(user)
       << "\n\tComputer Choice: " << choicesToString(computer)
       << "\n\tRound Winner : " << statusToString(status)
       << "\033[0m"; // Reset Color
}

int timesRepeatedInArray(int array[10], int arraySize, int numToCheck)
{
    int repeatition = 0;

    for (int i = 0; i < arraySize; i++)
    {
        if (numToCheck == array[i])
        {
            repeatition++;
        }
    }
    
    return repeatition;
}

char printGameResults(int results[10], short rounds)
{
  short wins = timesRepeatedInArray(results, rounds, win);
  short losses = timesRepeatedInArray(results, rounds, loss);
  short draws = timesRepeatedInArray(results, rounds, draw);

  string winner = " ";

  char again = ' ';

  if (wins > losses)
  {
    winner = "Player";
  }

  else if (wins < losses)
  {
    winner = "Computer";
  }

  else
  {
    winner = "No One";
  }

  cout << "\n\t\t_____________________________________________"
       << "\n\t\t\t   +++ G a m e  O v e r +++\t\t"
       << "\n\t\t_____________________________________________"
       << "\n\n\t\t_______________[Game Results]________________"
       << "\n\t\tGame Rounds : " << rounds
       << "\n\t\tWins        : " << wins
       << "\n\t\tLosses      : " << losses
       << "\n\t\tDraws       : " << draws
       << "\n\t\tFinal Winner: " << winner
       << "\n\t\t_____________________________________________"
       << "\n\t\tDo you want to play again? Y/N: ";

  cin >> again;
  return again;  
}

void startGame()
{
  int roundsResults[10];
  short rounds = readRounds();
  char playAgain = ' ';

  enChoices user, computer;
  
  for (int i = 1; i <= rounds; i++)
  {
    cout << "\n\nRound [" << i << "] begins: \n";
    
    roundsResults[i - 1] = roundStart(user, computer);

    cout << "\n\t_______________Round [" << i << "]_______________";

    printRoundStatus(user, computer, static_cast<enRoundStatus>(roundsResults[i - 1]));

    cout << "\n\t______________________________________";
  }

  playAgain = printGameResults(roundsResults, rounds);

  switch (playAgain)
  {
  case 'Y':
    startGame();
    break;
  
  default:
    break;
  }
}

int main()
{
  srand((unsigned)time(NULL));
  startGame();

  return 0;
}