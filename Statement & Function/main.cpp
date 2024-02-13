#include <iostream>

int addNumbers(int first_param, int second_param) {
   int sum = first_param + second_param;
   return sum;
}

int main(int argc, char **argv) {
   int first_number {10};
   int second_number {20};

   std::cout << "First Number: " << first_number << std::endl;
   std::cout << "Second Number: " << second_number << std::endl;

   int sum = first_number + second_number;

   std::cout << "Sum: " << sum << std::endl;

   sum = addNumbers(10, 40);

   std::cout << "Sum: " << sum << std::endl;

   std::cout << "Sum: " << addNumbers(40, 60) << std::endl;

   return 0;
}