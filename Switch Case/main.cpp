#include <iostream>

int main() {

   int day;

   std::cout << "Enter the day number: ";
   std::cin >> day;

   switch (day) {
      case 2:
         std::cout << "Monday" << std::endl;
         break;
      case 3:
         std::cout << "Tuesday" << std::endl;
         break;
      case 4:
         std::cout << "Wednesday" << std::endl;
         break;
      case 5:
         std::cout << "Thursday" << std::endl;
         break;
      case 6:
         std::cout << "Friday" << std::endl;
         break;
      case 7:
         std::cout << "Saturday" << std::endl;
         break;
      case 1:
         std::cout << "Sunday" << std::endl;
         break;
      default:
         std::cout << "Invalid day. Enter between 1-7" << std::endl;

   }
}