#include <iostream>

int main()
{
    std::string name;

    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

     while(1==1){
        std::cout << "HELP I'M STUCK IN A INFINITE LOOP! ";
        std::getline(std::cin, name);
    }






    return 0;
}