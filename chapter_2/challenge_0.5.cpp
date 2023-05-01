/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 5: Miles per Gallon

"A car holds 16 gallons of gasoline and can travel 312 miles before refueling.
Write a program that calculates the number of miles per gallon the car gets.
Display the result on the screen."

5/1/2023
*/

#include <iostream>
using namespace std;

int main(){
    double
        gallons = 16,
        miles = 312,
        result;

    result = miles / gallons;

    cout << "Miles per gallon: " << result << endl;
    
    return 0;
}