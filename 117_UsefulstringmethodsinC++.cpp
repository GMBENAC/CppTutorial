#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //if(name.length() > 12){
        //std::cout << "Your name can't be over 12 characteres\n";
    //}
    //else{
        //std::cout << "Welcome " << name;
    //}

    //if(name.empty()){
        //std::cout << "you didn't enter your name\n";
    //}
    //else{
        //std::cout << "Hello\n " << name;
    //}

    // name.clear();
    // std::cout << name;

    // name.append("@gamil.com");

    // std::cout << "Your username is now \n" << name;

    //std::cout << name.at(1);
    // name.insert(1, "@");

    // std::cout << name;

    // std::cout << name.find('b');

    name.erase(0,3);

    std::cout << name;
    
    return 0;
}