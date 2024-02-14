#include <iostream>

typedef std::string str;
typedef int number;

using string = std::string;
using num = int;

int main() {

   string name {"Santhosh"};
   str name2 {"Santhosh2"};
   number age {21};
   num age2 {22};

   std::cout << name << age << std::endl;
   std::cout << name2 << age2 << std::endl;

   return 0;
}