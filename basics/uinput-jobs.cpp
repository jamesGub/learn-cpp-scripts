#include <iostream> 

// cout << (insertion operator)
// cin >> (extraction operator) 
// TO read a string with spaces, use the get line function. getline(cin, variable)
// std::ws eliminates whitespace or new line characters between input buffers. 

int main() { 
    std::string profession; 
    int salary;

    std::cout << "What is your profession? ";
    std::getline(std::cin >> std::ws, profession);

    std::cout << "How much do you make in a year? ";
    std::cin >> salary;
    std::cout << '\n';
    
    
    std::cout << "That is a good profession, a " << profession << "." << '\n';
    std::cout << "And you make a decent living, with $" << salary << " a year." << '\n';
     

    std::cout << "I know that was a bit taboo to ask...I am sorry.";
    
    return 0;
}