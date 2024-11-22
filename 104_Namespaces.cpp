# include <iostream>


namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){

    // Namespace = provides a solution for preventing name conflits
    //             in large projects. Each entity needs a uniqye name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.
    
    
   
    std::cout << first::x;

    return 0;
}






