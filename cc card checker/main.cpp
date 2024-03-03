#include <iostream>

int evensum(long card_number);
int oddsum(long card_number);
bool cc_check(long card_number);

int main()
{
   long card_number = 6011000000000000;
   int found = 0;

   std::cout << "Card number: " << card_number << std::endl;
   std::cout << "Sum of evens: " << evensum(card_number) << std::endl;
   std::cout << "Sum of odds: " << oddsum(card_number) << std::endl;
   std::cout << "Sum: " << evensum(card_number) + oddsum(card_number) << std::endl;
   std::cout << "Valid: " << (cc_check(card_number) ? "Yes" : "No") << std::endl;

   while (found < 1000000)
   {
      if (cc_check(card_number))
      {
         std::cout << "Card number: " << card_number << std::endl;
         found++;
      }
      card_number++;
   }
}

int evensum(long card_number)
{
   int temp, count = 1, sum = 0;

   while (card_number > 0)
   {
      temp = card_number % 10;
      card_number /= 10;

      if (!(count % 2))
      {
         temp *= 2;
         if (temp > 9)
         {
            sum += (temp / 10) + (temp % 10);
         }
         else
         {
            sum += temp;
         }
      }
      count++;
   }
   return sum;
}

int oddsum(long card_number)
{
   int temp, sum = 0, count = 1;

   while (card_number > 0)
   {
      temp = card_number % 10;
      card_number /= 10;

      if (count % 2)
      {
         sum += temp;
      }

      count++;
   }
   return sum;
}

bool cc_check(long card_number)
{
   return (evensum(card_number) + oddsum(card_number)) % 10 == 0;
}