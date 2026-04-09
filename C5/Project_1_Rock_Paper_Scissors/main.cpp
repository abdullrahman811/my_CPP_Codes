// C++ Header
#include <iostream>
#include <ctime> 
using namespace std;


// Enums
enum enChoices     { rock, paper, scissor };
enum enRoundStatus { win, loss, draw };


// Status Matrix
const enRoundStatus resultMatrix[3][3] = {
    //Rock          Paper          Scissor
    { draw,          loss,          win     }, // Rock
    { win,           draw,          loss    }, // Paper
    { loss,          win,           draw    }  // Scissor
};


// Structs
struct stRoundInfo
{
  short roundNumber = 0;
  enChoices playerChoice;
  enChoices computerChoice;
  enRoundStatus status;
};  

struct stGameStatus
{
  short totalRounds = 0;
  short wins = 0;
  short losses = 0;
  short draws = 0;
  string finalWinner = " ";
};  


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

  return static_cast<enChoices>(choice - 1);
}

enChoices randomChoice()
{
  int ranNum = rand() % (3 - 1 + 1) + 1;

  return static_cast<enChoices>(ranNum - 1);
}

stRoundInfo roundStart(stRoundInfo info)
{

  info.playerChoice = readChoice();

  info.computerChoice = randomChoice();

  info.status = resultMatrix[info.playerChoice][info.computerChoice];

  return info;
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

void printRoundStatus(stRoundInfo info, int i)
{
  // Colors
  if (info.status == draw)
  {
    cout << "\033[33m";
  }

  else if (info.status == loss)
  {
    cout << "\033[31m";
  }

  else
  {
    cout << "\033[32m";
  }

  cout << "\n\t_______________Round [" << i << "]_______________"
       << "\n\tPlayer  Choice : " << choicesToString(info.playerChoice)
       << "\n\tComputer Choice: " << choicesToString(info.computerChoice)
       << "\n\tRound Winner : " << statusToString(info.status)
       << "\n\t______________________________________"
       << "\033[0m"; // Reset Color
}

stGameStatus roundToGame(stRoundInfo round, stGameStatus game)
{
  switch (round.status)
  {
  case win:
    game.wins++;
    break;
  
  case loss:
    game.losses++;
    break;

  case draw:
    game.draws++;
    break;

  default:
    break;
  }

  return game;
}

void whoWonTheGame(stGameStatus &game)
{
  if (game.wins > game.losses)
  {
    game.finalWinner = "Player";
  }

  else if (game.wins < game.losses)
  {
    game.finalWinner = "Computer";
  }

  else
  {
    game.finalWinner = "No One";
  }
}

void printGameResults(stGameStatus game)
{
  whoWonTheGame(game);

  cout << "\n\n\n\t\t_____________________________________________"
       << "\n\t\t\t   +++ G a m e  O v e r +++\t\t"
       << "\n\t\t_____________________________________________"
       << "\n\n\t\t_______________[Game Results]________________"
       << "\n\t\tGame Rounds : " << game.totalRounds
       << "\n\t\tWins        : " << game.wins
       << "\n\t\tLosses      : " << game.losses
       << "\n\t\tDraws       : " << game.draws
       << "\n\t\tFinal Winner: " << game.finalWinner
       << "\n\t\t_____________________________________________";
}

void resetScreen()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void startGame()
{
  char playAgain = ' ';
  
  do
  {
  resetScreen();
    
  stRoundInfo round;
  stGameStatus game;

  game.totalRounds = readRounds();

  for (int i = 1; i <= game.totalRounds; i++)
  {
    cout << "\n\nRound [" << i << "] begins: \n";
    
    round = roundStart(round);
    game = roundToGame(round, game);


    printRoundStatus(round, i);

  }

  printGameResults(game);
  
  cout << "\n\t\tDo you want to play again? Y/N: ";
  cin >> playAgain;

  } while(playAgain == 'y' || playAgain == 'Y');
}

int main()
{
  srand((unsigned)time(NULL));
  startGame();

  return 0;
}