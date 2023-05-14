#include <iostream>
using namespace std;

int main() { 
    
    // Ints
    int i1; //Declaration of the variable.
    i1 = 10; // Assignment
    int i2 = 18;
    int sum = i1 + i2;

    // Doubles (number including a decimal)
    double GPA = 3.54;
    double cumulative = 3.7; 
    double temperature = 41.5;

    // Chars use single quotes and one character
    char grade = 'A';
    char initial = 'J';
    char currency = '$';

    // Booleans
    bool employed = true;
    bool sunny = false;

    // String (objects of text sequences)
    string goals = "Learning C++";
    string more_goals = "Learning Unreal Engine";

    cout << i1 << '\n';
    cout << sum << '\n';

    cout << GPA << '\n';
    cout << cumulative << '\n';

    // string literals 
    cout << "Your goals are " << goals << " and " << more_goals << '\n';
    cout << "Your GPA is " << GPA;
    return 0;
}