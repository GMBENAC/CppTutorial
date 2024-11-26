# include <iostream> 

int main(){

    int x; //declaration
    x = 5; //assignment
    int y = 6;
    int sum = x + y;
    //integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5;

    //double (number includind decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character
    char grade = 'A';
    char initial = 'C';
    char currency = '$';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    std::string name = "Gabriel";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << days << '\n';
    std::cout << price << '\n';
    std::cout << gpa << '\n';
    std::cout << temperature << '\n';
    std::cout << grade << '\n';
    std::cout << initial << '\n';
    std::cout << currency << '\n';
    std::cout << student << '\n';
    std::cout << power << '\n';
    std::cout << forSale << '\n';
    std::cout << name << '\n';
    std::cout << day << '\n';
    std::cout << food << '\n';
    std::cout << address << '\n';

    return 0;
}
