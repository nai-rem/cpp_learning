/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 20: How Much Paint

"
A particular brand of paint covers 340 square feet per gallon. Write a program to
determine and report approximately how many gallons of paint will be needed to paint
two coats on each side of a wooden fence that that is 6 feet high and 100 feet long.
"

5/2/2023
*/

#include <iostream>
using namespace std;

int main(){
    int
        fenceLength = 100,
        fenceHeight = 6;
    double
        fenceArea,
        paintEfficiency = 340.0, // in square feet covered per gallon.
        gallonsNeeded;

    fenceArea = fenceLength * fenceHeight * 2; // multiplied by two to represent the second side of the fence.
    gallonsNeeded = fenceArea * 2 / paintEfficiency;// fenceArea multiplied by two again to represent the two coats of paint.

    cout << "Approximately " << gallonsNeeded << " gallon(s) of paint are needed to paint the fence." << endl; 

    return 0;
}