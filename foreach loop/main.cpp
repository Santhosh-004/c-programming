#include <iostream>

int getTotal(int numbers[], int length);

int main()
{

   int numbers[] = {1, 2, 3, 4, 5};

   int total = getTotal(numbers, sizeof(numbers) / sizeof(numbers[0]));

   std::cout << "Total: " << total << std::endl;
}

int getTotal(int numbers[], int length)
{

   int sum = 0;

   for (int i = 0; i < length; i++)
   {

      sum += numbers[i];
   }

   return sum;
}