#include <iostream>

int main() {

   double first_number;
   double second_number;
   double result;
   char op;

   std::cout << "************* Welcome to the Calculator *************" << std::endl;
   
   std::cout << "Enter first number: ";
   std::cin >> first_number;
   std::cout << "Enter second number: ";
   std::cin >> second_number;

   std::cout << "Enter the operator: ";
   std::cin >> op;

   switch (op) {
      case '+':
         result = first_number + second_number;
         std::cout << "Result: " << result << std::endl;
         break;
      case '-':
         result = first_number - second_number;
         std::cout << "Result: " << result << std::endl;
         break;
      case '*':
         result = first_number * second_number;
         std::cout << "Result: " << result << std::endl;
         break;
      case '/':
         result = first_number / second_number;
         std::cout << "Result: " << result << std::endl;
         break;
      default:
         std::cout << "Invalid operator" << std::endl;
   }

   std::cout << "******** Thank you for using the Calculator ********" << std::endl;

   return 0;

}