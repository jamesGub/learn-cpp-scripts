#include <iostream>

int main() { 
    // switch - using cases instead of numerous if/else. 
    int languages; 
    std::string sample = "What is your first language? ";
    std::string sample1 = "Which two languages do you know? ";
    std::string sample2 = "Which three languages do you know? ";
    std::string sample3 = "Which four languages do you know? ";
    std::string sample4 = "Which five languages do you know? ";
    std::string sample5 = "Which six languages do you know? ";
    std::cout << "How many languages do you know? ";
    std::cin >> languages; 

    switch(languages) { 
        case 1:
            std::cout << sample;
            std::cin >> sample; 
            break;
        case 2:
            std::cout << sample1; 
            std::cin >> sample1;
            break;
        case 3:
            std::cout << sample2; 
            std::cin >> sample2;
            break;
        case 4:
            std::cout << sample3; 
            std::cin >> sample3;
            break;
        case 5:
            std::cout << sample4; 
            std::cin >> sample4;
            break;
        case 6:
            std::cout << sample5; 
            std::cin >> sample5;
            break;
}
}