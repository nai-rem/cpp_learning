/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 18: Future Ocean Levels

"
During the past decade ocean levels have been rising faser than in the past, an average
of approximately 3.3 millimeters per year. Write a program that computes how much ocean
levels are expected to rise during the next 15 years if they continue rising at this rate.
Display the answer in both centimeters and inches.
"

5/2/2023
*/

#include <iostream>
using namespace std;

int main(){
    double
        oceanLevelIncreaseRate = 3.3, // in millimeters
        predictedOceanLevelInMillimeters,
        predictedOceanLevelInCentimeters,
        predictedOceanLevelInInches;
    
    predictedOceanLevelInMillimeters = oceanLevelIncreaseRate * 15;
    predictedOceanLevelInCentimeters = 0.1 * predictedOceanLevelInMillimeters;
    predictedOceanLevelInInches = 0.3937 * predictedOceanLevelInCentimeters;

    cout << "Assuming the increase rate remains the same, the ocean level is predicted to rise " << predictedOceanLevelInCentimeters << " centimeters/";
    cout << predictedOceanLevelInInches << " inches." << endl;

    return 0;
}