#include <iostream> 
#include <string>


int main() { 
    void lengths();
    void affordance();
    void loopy();
    std::string greeting = "Bonjour";
    std::string subject = ", mon ami!";

    //string interaction = greeting + " " + subject; 
    std::string interaction = greeting.append(subject);
    std::cout << interaction;

    //append object: concats strings and other operations. 

    lengths();
    affordance();
    loopy();

}

void lengths() { 
    std::string placeholder;
    std::cout << "\n";
    std::cout << "Enter a word. This program will calculate the length of said word. \n";
    std::cin >> placeholder;

    std::cout << "The length of your word is: " << placeholder.length() << "\n";
    //Will not work with spaces.
    //length function syntax: string.length();
    //size() function does the exact same thing

}

void affordance() { 
    //Access strings - Can access each character by referring to index.
    std::string indy;
    int count;
    std::cout << "\n";
    std::cout << "Enter a word, then enter a number. This program will return the position of a letter in your word. \n";

    std::cin >> indy;
    std::cout << "Your word is " + indy + ".\n";
    std::cout << "Enter a number: ";
    std::cin >> count;
    std::cout << "Your number is: " << count << "\n";

    std::cout << "The letter you returned is " << indy[count] << " at position " << count << ".";

    //Can use + or << operator to concat strings variables in cout. 
}

//Escapes: \' single quote, \" double quote, \\ backslash (only inside a string), \n new line, \t tab.

void loopy() { 
    int count; 
    std::string phrase;
    std::cout << "\n";
    std::cout << "Enter a phrase, then state how many times you want that phrase to repeat.";
    std::cin >> phrase;
    std::cout << "Your number?";
    std::cin >> count; 

    int i = 0;
    while (i < count) { 
        std::cout << phrase << "\n";
        i++;
    }
}

