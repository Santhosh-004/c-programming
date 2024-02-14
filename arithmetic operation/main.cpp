#include <iostream>

int main() {

   int first_number {10};
   int second_number {20};

   int sum = first_number + second_number;
   int difference = first_number - second_number;
   int multiplication = first_number * second_number;
   int division_quotient = first_number / second_number;
   int division_remainder = first_number % second_number;
   double division = first_number / (double)second_number;

   std::cout << "Sum: " << sum << std::endl;
   std::cout << "Difference: " << difference << std::endl;
   std::cout << "Multiplication: " << multiplication << std::endl;
   std::cout << "Division Quotient: " << division_quotient << std::endl;
   std::cout << "Division Remainder: " << division_remainder << std::endl;
   std::cout << "Division: " << division << std::endl;

   std::cout << (char) 97 << std::endl;

   return 0;
}