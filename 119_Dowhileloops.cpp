# include <iostream>

int main()
{
   // Do while loop = do some block of code first.
  //                 THEN repeat again if condition is true.

int number;

// while (number < 0){
// std::cout << "Enter a positive #: "; 
// std::cin >> number;
// }
// std::cout << "The # is: " << number;

do{
std::cout << "Enter a positive #: ";
std::cin >> number;
}while (number < 0);
    
std::cout << "The # is: " << number;    
    

return 0;
}