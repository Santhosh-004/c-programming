#include <iostream>
#include <ctime>
#include <utility>

typedef enum
{
   tie,
   win,
   ongoing
} result;

typedef std::pair<result, std::string> answer;

void printBoard(std::string *board);
void playerMove(std::string *board);
void computerMove(std::string *board);
answer checkWin(std::string *board);

int main()
{
   std::string board[9];

   std::fill(board, board + 9, " ");

   auto check = checkWin(board);

   while (check.first == ongoing)
   {
      printBoard(board);
      playerMove(board);
      check = checkWin(board);

      if (check.first == win)
      {
         printBoard(board);
         std::cout << "You win!" << std::endl;
         break;
      }

      if (check.first == tie)
      {
         printBoard(board);
         std::cout << "Tie game!" << std::endl;
         break;
      }
      computerMove(board);
      check = checkWin(board);

      if (check.second == "O")
      {
         printBoard(board);
         std::cout << "The computer wins!" << std::endl;
         break;
      }

      if (check.first == tie)
      {
         printBoard(board);
         std::cout << "Tie game!" << std::endl;
         break;
      }
   }
}

void printBoard(std::string *board)
{
   std::cout << "     |     |     " << std::endl;
   std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << std::endl;
   std::cout << "_____|_____|_____" << std::endl;
   std::cout << "     |     |     " << std::endl;
   std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << std::endl;
   std::cout << "_____|_____|_____" << std::endl;
   std::cout << "     |     |     " << std::endl;
   std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << std::endl;
}

void playerMove(std::string *board)
{
   int player;
   while (true)
   {
      std::cout << "Enter your move: ";
      std::cin >> player;

      if (board[player - 1] == " ")
      {
         break;
      }
      else
      {
         std::cout << "Invalid move. Try again." << std::endl;
      }
   }
   board[player - 1] = "X";
}

void computerMove(std::string *board)
{
   int computer;
   srand(time(0));
   while (true)
   {
      computer = rand() % 9;
      if (board[computer] == " ")
      {
         board[computer] = "O";
         break;
      }
   }
}

answer checkWin(std::string *board)
{
   int value = -1;
   if (board[0] == board[1] && board[1] == board[2] && board[0] != " ")
   {
      value = 0;
   }
   else if (board[3] == board[4] && board[4] == board[5] && board[3] != " ")
   {
      value = 3;
   }
   else if (board[6] == board[7] && board[7] == board[8] && board[6] != " ")
   {
      value = 6;
   }
   else if (board[0] == board[3] && board[3] == board[6] && board[0] != " ")
   {
      value = 0;
   }
   else if (board[1] == board[4] && board[4] == board[7] && board[1] != " ")
   {
      value = 1;
   }
   else if (board[2] == board[5] && board[5] == board[8] && board[2] != " ")
   {
      value = 2;
   }
   else if (board[0] == board[4] && board[4] == board[8] && board[0] != " ")
   {
      value = 0;
   }
   else if (board[2] == board[4] && board[4] == board[6] && board[2] != " ")
   {
      value = 2;
   }
   else if (board[0] != " " && board[1] != " " && board[2] != " " && board[3] != " " && board[4] != " " && board[5] != " " && board[6] != " " && board[7] != " " && board[8] != " ")
   {
      return std::make_pair(tie, " ");
   }

   if (value != -1)
   {
      if (board[value] == "X")
      {
         return std::make_pair(win, "X");
      }
      else
      {
         return std::make_pair(win, "O");
      }
   }

   return std::make_pair(ongoing, " ");
}