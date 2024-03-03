#include <iostream>

int main() {

   std::string name = "clkafasdf        a";

   std::cout << name.find_last_of(" ") << std::endl;

   name.erase(name.find_last_of(" "));

   std::cout << name << std::endl;

   std::cout << name.find_last_of("f") << std::endl;

   std::cout << name.find_last_not_of("f") << std::endl;
}