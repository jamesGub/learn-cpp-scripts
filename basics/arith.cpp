#include <iostream>

int main() { 
    // arithmetic operators: + - / *

    int hours = 24;
    int hobbies = 5;
    int work = 2;
    int exercise = 6;
    
    int difference_hobbies = 4 + 2 + 6;

    int time_in_day = hours -= difference_hobbies;

    int total = 2 * time_in_day;

    //int hobby_amt = hours /= hobbies; 
    int hobby_amt = time_in_day % hobbies; 

    //If the remainder is 0, then its even.
    //If the remainder is 1, then its odd. Gives the remainder of the division.

    // Simple equation - parenthesis -> multiplication and division -> addition and subtraction. 
    int time_equation = (24 - 14) * 7; 



    std::cout << "Here is how much time you have left today: " << time_in_day << " hours" << '\n';
    std::cout << "If each hobby takes you " << hobbies << " hours, here is the amount you can do today: " << hobby_amt << "." << '\n';
    std::cout <<"Tomorrow is a full day with " << total << " hours." << '\n';
    std::cout << "Hours per week doing hobbies, work, and more: " << time_equation;


    return 0;
}