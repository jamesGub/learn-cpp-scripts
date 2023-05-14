#include <iostream>
using std::cout;
using std::string;

//Using namespace std can lead to conflicts with naming. Can declare independent std uses. 

namespace first{
    string pick_me = "I am the first namespace";
}

namespace second{
    string pick_me = "I am the second namespace";
}

int main() { 

    //Namespace: provides a solution for preventing name conflicts in large projects. Each entity needs a unique name.
    //A namespace allows for identically names entities as long as the namespaces are different. 
    //Cannot redeclare variables, so we need to use namespace, which is declared 
    //above the main function.

    using namespace second;

    //string pick_me = "I am the local version!";
    cout << pick_me;

    return 0;
   
}