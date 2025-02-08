#include <iostream>

int main()
{
     // && = check if two conditions are true
    // || = check if at least one of two conditions is true
   //  ! = reverses the logical state of its operand

   int temp;
   bool sunny = true;

   std::cout << "Enter the temperature: ";
   std::cin >> temp;
   

   if (temp> 0 && temp < 30){
       std::cout << "The temperature is good!\n";
   }
   else{
     std::cout << "The temperature is bad!\n";

   }

   std::cout << "Enter the temperature: ";
   std::cin >> temp;

   if (temp> 0 || temp < 30){
       std::cout << "The temperature is good!\n";
   }
   else{
     std::cout << "The temperature is bad!\n";
   }

   if(sunny){
    std::cout << "It is sunny outiside!\n";

   }
   else{
    std::cout << "Is is cloudy outiside\n";
   }
   
   if(!sunny){
    std::cout << "It is sunny outiside!\n";

   }
   else{
    std::cout << "Is is cloudy outiside\n";
   }


   return 0;
}