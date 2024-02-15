#include <iostream>
#include <cmath>

int main() {

   double side_a ;
   double side_b ;
   double hypotenuse ;

   std::cout << "Enter side a: ";
   std::cin >> side_a;
   std::cout << "Enter side b: ";
   std::cin >> side_b;

   hypotenuse = std::sqrt(std::pow(side_a, 2) + std::pow(side_b, 2));

   std::cout << "Hypotenuse: " << hypotenuse << std::endl;

   return 0;
}