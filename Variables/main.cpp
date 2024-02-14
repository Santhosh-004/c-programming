#include <iostream>

int main() {
   int age {21};
   float price {399.99};
   char initial {'A'};

   std::string name {"Santhosh"};

   bool happy {true};

   std::cout << "Hi there " << name << "!" << std::endl;
   std::cout << "You are " << age << " years old." << std::endl;
   std::cout << "The price is " << price << " and the initial is " << initial << std::endl;

   return 0;

}