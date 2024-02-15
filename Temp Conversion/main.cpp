#include <iostream>

int main() {

   double fahrenheit;
   double celsius;
   char unit;

   std::cout << "Welcome to the Temperature Converter" << std::endl;

   std::cout << "Select temperature to convert to (F or C): ";
   std::cin >> unit;

   if (unit == 'C' || unit == 'c') {

      std::cout << "Enter temperature in Fahrenheit: ";
      std::cin >> fahrenheit;

      celsius = (fahrenheit - 32) * 5 / 9;

      std::cout << "Temperature in Celsius: " << celsius << std::endl;
   
   } else if (unit == 'F' || unit == 'f') {

      std::cout << "Enter temperature in Celsius: ";
      std::cin >> celsius;
      
      fahrenheit = celsius * 9 / 5 + 32;

      std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
   
   } else {

      std::cout << "Invalid temperature unit" << std::endl;
   }

}