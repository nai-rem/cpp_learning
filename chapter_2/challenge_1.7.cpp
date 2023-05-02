/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 17: Past Ocean Levels

"
The Earth's ocean levels have risen an average of 1.8 millimeters per year over the past century.
Write a program that computes and displays the number of centimeters and number of inches the oceans
rose during this time.
"

5/2/2023
*/

#include <iostream>
using namespace std;

int main(){
    double
        oceanLevelIncreaseInMillimeters = 1.8 * 100.0,
        oceanLevelIncreaseInCentimeters,
        oceanLevelIncreaseInInches;

    oceanLevelIncreaseInCentimeters = 0.1 * oceanLevelIncreaseInMillimeters;
    oceanLevelIncreaseInInches = 0.3937 * oceanLevelIncreaseInCentimeters;

    cout << "The ocean level has risen an average of " << oceanLevelIncreaseInCentimeters << " centimeters over the past century" << endl;
    cout << "The ocean level has risen an average of " << oceanLevelIncreaseInInches << " inches over the past century" << endl;
    return 0;
}