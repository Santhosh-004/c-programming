#include <iostream>

int main(int argc, char **argv) {
   std::cout << "Hello World!" << std::endl;

   int age;
   std::string name;

   std::cout << "Enter your full name: ";
   std::getline(std::cin, name);

   std::cout << "Enter your age: ";
   std::cin >> age;

   std::cout << "Your name is " << name << " and your age is " << age << std::endl;

   return 0;
}