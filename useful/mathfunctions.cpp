#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>


/*
This is a personal calculator program for various math functions that I come across, making it a one stop for simple to complex areas. 
Not a final build, I plan to add more if I see the need, but for now there are some basic calculations in here that may help. 
Feel free to use this code yourself for all your math troubles! - JG.
*/

void runProgram () { 
    // Functions
    void min_max();
    void math_functions();
    void hypotenuse();
    void trig();
    int stats();

    std::cout << "Welcome to the math functions program! This is a personal calculator of sorts so feel free to use it!" << std::endl;
    std::cout << '\n';
    std::cout << "Which function would you like to run?" << std::endl;
    std::cout << "1. Find the minimum and maximum of two numbers" << std::endl;
    std::cout << "2. Perform mathematical operations (Rounding, square root, exponents)" << std::endl;
    std::cout << "3. Calculate the hypotenuse of a triangle" << std::endl;
    std::cout << "4. Find sine, cosine, and tangent of any angle" << std::endl;
    std::cout << "5. Statistical functions: Mean, Median, and Mode." << std:: endl;

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        min_max();
    } else if (choice == 2) {
        math_functions();
    } else if (choice == 3) {
        hypotenuse();
    } else if (choice == 4) { 
        trig();
    } else if (choice == 5) { 
        stats();
    }
    else {
        std::cout << "Invalid choice!" << std::endl;
    }

}

void recheck() { 
      //If the user wants to check again
    std::string recheck = "Would you like to run the program again? Yes or No: ";
    std::cout << recheck;
    std::cin >> recheck;
    if (recheck == "Yes") { 
        runProgram();
    }    
    else if (recheck == "No") { 
        std::cout << "No problem! Hope you enjoyed this program.";
    }
    else {
        std::cout << "That is not a valid option! Quitting the program...";

}
}

void min_max() { 
    // max and min functions, (x , y).
    double xes;
    double rog;
    double sums; 
    
    std::cout << "Enter a number: ";
    std::cin >> xes;

    std::cout << "Enter another number: ";
    std::cin >> rog;  

    sums = std::max(xes, rog);
    std::cout << "The larger number of this set is " << sums << "." << '\n';
    sums = std::min(xes, rog);
    std::cout << "The smaller number of this set is " << sums << "." << "\n";

    
    std::cout << "We know that is pretty obvious, but just for the sake of it this number reader works!" << '\n';
    recheck();
}

void math_functions() { 
    std::cout << '\n';
    std::cout << "Okay, let's try some more complex functions." << '\n';
    std::cout << '\n';

    std::string text = "Enter the character for the function you want: \n"
    "1. To raise the power of a number: P\n" 
    "2. To find the square root of a number: S\n" 
    "3. To find the absolute value of a number: A\n" 
    "4. To round a number: R\n" 
    "5. To round a number up: C\n" 
    "6. To round a number down: F\n";

    std::cout << text; 
    std::cin >> text; 

    if(text == "P") { 
        double base;
        double power;
        std::cout << "Power: Enter the number you would like to be the base: ";
        std::cin >> base; 
        std::cout << '\n';

        std::cout << "Enter the exponent: ";
        std::cin >> power; 
        std:: cout << '\n'; 

        double result = pow(base, power); 
        std::cout << "Here is your result: " << result << ".";
        std::cout << '\n';
        
    }
    else if(text == "S") {
        double square; 
        std::cout << "Square Root: Enter the number you would like to find the square root of: ";
        std::cin >> square; 
        std::cout << '\n';

        double product = sqrt(square);
        std::cout << "Here is your result: " << product << ".";
        std::cout << '\n';
        
    }
    else if(text == "A") { 
        double abdominal;
        std::cout << "Absolute Value: Enter the number you would like to find the absolute value for: ";
        std::cin >> abdominal;
        std::cout << '\n'; 

        double product = abs(abdominal); 
        std::cout << "Here is your result: " << product << ".";
        std::cout << '\n';
        
    }
    else if (text == "R") { 
        double rounded; 
        std::cout << "Rounding: Enter the number you want rounded: ";
        std::cin >> rounded; 
        std::cout << '\n';

        double product = round(rounded);
        std::cout << "Here is your result: " << product << ".";
        std::cout << '\n';
       
    }
    else if (text == "C") { 
        double tall; 
        std::cout << "Rounding up: Enter the number you want rounded up: ";
        std::cin >> tall; 
        std::cout << '\n';
        
        double product = ceil(tall); 
        std::cout << "Here is your result: " << tall << ".";
        std::cout << '\n';
       
    }
    else if (text == "F") { 
        double shorty;
        std::cout << "Rounding down: Enter the number you want rounded down: ";
        std::cin >> shorty;
        std::cout << '\n'; 

        double product = floor(shorty); 
        std::cout << "Here is your result: " << shorty << ".";
        std::cout << '\n';
        
    }
    else { 
        std::cout << "That is not an option! Try running the program again.";
    }
    recheck();
}

void hypotenuse() { 
    //Hypotenuse of a user-inputted triangle
    double a;
    double b;
    double c; 

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    // Formula implementation: c = square root of a^2 + b^2
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Your hypotenuse is: " << c;
    std::cout << '\n';
   
    recheck();
 
}
 
void trig() { 
    double angle;
    int option;
    std::cout << "Which would you like to calculate? \n";
    std::cout << "1. Sine\n";
    std::cout << "2. Cosine\n";
    std::cout << "3. Tangent\n";
    std::cin >> option;

    std::cout << "Enter an angle in degrees: ";
    std::cin >> angle;

    double radians = angle * M_PI / 180.0;

    switch(option) { 
        case 1:
        std::cout << "sin (" << angle << ") = " << sin(radians) << "\n";
        break;
        case 2: 
        std::cout << "cos(" << angle << ") = " << cos(radians) << "\n";
        break;
        case 3:
        std::cout << "tan(" << angle << ") = " << tan(radians) << "\n";
        break;
        default:
        std::cout << "Invalid input!\n";
    }
    recheck();
    }

//statistical functions
double mean(const std::vector<double>& vec) {
    // Sums up the array, divides by # of elements via size().
    double sum = 0;
    for (const auto& x : vec) {
        sum += x;
    }
    return sum / vec.size();
}

double median(std::vector<double> vec) {
    // Sort(), then calculate whether its even or odd. If odd, we return the middle value.
    // If even, we get the average of the middle two elements. 
    std::sort(vec.begin(), vec.end());
    if (vec.size() % 2 == 0) {
        return (vec[vec.size() / 2 - 1] + vec[vec.size() / 2]) / 2;
    } else {
        return vec[vec.size() / 2];
    }
}
double mode(const std::vector<double>& vec) {
    // Finding frequency with the map header, return the correspoding element that appears most. 
    std::unordered_map<double, int> freq_map;
    for (const auto& x : vec) {
        freq_map[x]++;
    }
    int max_freq = 0;
    double mode_value = 0;
    for (const auto& kv : freq_map) {
        if (kv.second > max_freq) {
            max_freq = kv.second;
            mode_value = kv.first;
        }
    }
    return mode_value;
}

// Main driver for inputs.
int stats() { 
    std::vector<double> vec;
    int n;
    std::cout << "Statistics calculations: To start, enter the size of your input.\n";
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter " << n << " numbers:\n";
    // User enters however many numbers they declared, loop stops once that happens. 
    for (int i = 0; i < n; i++) {
        double x;
        std::cin >> x;
        vec.push_back(x);
    }

    //Switch input. 
    std::cout << "Choose an option to calculate this array:\n";
    std::cout << "1. Mean\n";
    std::cout << "2. Median\n";
    std::cout << "3. Mode\n";
    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "The mean is: " << mean(vec) << std::endl;
            break;
        case 2:
            std::cout << "The median is: " << median(vec) << std::endl;
            break;
        case 3:
            std::cout << "The mode is: " << mode(vec) << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
    }
    recheck();
    return 0;
}

int main() { 
    
    runProgram();
    
    return 0;
}
    // Available functions: 
    // pow function: var = pow(num1, raisedto)
    // square root function: var = sqrt(9);
    // absolute value function: var = abs(-6)
    // rounding function: var = round(x);
    // round up ceiling function: var = ceil(x);
    // round down ceiling function: var = floor(x);
    // Hypotenuse: c = sqrt(a^2 + b ^2); 
