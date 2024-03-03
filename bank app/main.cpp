#include <iostream>

double balance(double bal);

double deposit();

double withdraw();

int main()
{
   double bal = 0;
   int op = 0;
   double amount;

   std::cout << "Welcome to the bank" << std::endl;

   do
   {
      std::cout << "Select an option" << std::endl;
      std::cout << "1. Check Balance" << std::endl;
      std::cout << "2. Deposit" << std::endl;
      std::cout << "3. Withdraw" << std::endl;
      std::cout << "4. Exit" << std::endl;
      std::cout << "Enter an option: ";
      std::cin >> op;

      switch (op)
      {
      case 1:
         std::cout << "Balance: " << balance(bal) << std::endl;
         break;
      case 2:
         bal += deposit();
         std::cout << "Balance: " << bal << std::endl;
         break;
      case 3:
         amount = withdraw();
         if (bal < amount)
         {
            std::cout << "Insufficient balance" << std::endl;
         }
         else
         {
            bal -= amount;
            std::cout << "Balance: " << bal << std::endl;
         }
         break;
      case 4:
         break;
      default:
         std::cout << "Invalid option" << std::endl;
      }

   } while (op != 4);

   return 0;
}

double balance(double bal)
{
   return bal;
}

double deposit()
{
   double amount;
   std::cout << "Enter amount to deposit: ";
   std::cin >> amount;
   return abs(amount);
}

double withdraw()
{
   double amount;
   std::cout << "Enter amount to withdraw: ";
   std::cin >> amount;
   return abs(amount);
}