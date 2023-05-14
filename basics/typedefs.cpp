#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairedlist_t; //nickname, essentially.underscore t.
// typedef std::string literally_t;
typedef int nm_t;
using literally_t = std::string;
using number_t = int;

int main() { 
    //typedef: A reserved keyword used to create an additional name (alias) for another data type.
    //New identifier for existing type, helps with readability and cutting down on typos. 
    //Use it when there is an obvious timesaver.
    //The "using" keyword is the same thing, a more modern solution.

    pairedlist_t pears;
    literally_t feelings = "Confused programmer";
    nm_t years = 20;

    std::cout << feelings << '\n';
    std::cout << years;

    
    return 0;
}