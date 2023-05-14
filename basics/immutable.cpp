#include <iostream>
using namespace std;
   
   
   int main() { 
   
        /*
        const keyword - prevents a variable from being changed, making it effectively "read-only"
        */

       //My variables that are immutable;
        const double PI = 3.14159;
        const int SPEED_LIGHT = 299792458;
        const int WIDTH = 1440;
        const int HEIGHT = 2560;
        
        double radius = 4.5;
        double circumference = 2 * PI * radius;

        //Outputs
        cout << circumference << " cm" << '\n';

        cout << "The resolution of your monitor is " << WIDTH << " x " << HEIGHT; 

        return 0;
   }