#include <iostream>


int main() { 

    // Implicit type conversion - automatic, declaring a decimal as an int for example. 
     // Explicit - Precede the value with a new data type. 
    
    int imp = 5.61237474;
    std::cout << imp << '\n';
    
    double exp = 6.3256;
    std::cout << (int)exp << '\n';

    
    // returns the character value of 100, see ascii table. 
    char ascii = 100;
    std::cout << ascii << '\n';
    std::cout << (char) 100 << '\n'; // this is the same implicit method.

    // test question example; 
    int correctanswers = 8;
    int questions = 20;
    double score = correctanswers/(double)questions * 100;

    std::cout << score << "%";



    return 0;

     
}