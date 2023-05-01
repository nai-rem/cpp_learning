/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 6: Distance per Tank of Gas

"A car with a 20 gallon tank averages 23.5 miles per gallon when driven in town and
28.9 miles per gallon when driven on the highway. Write a program that calculate and displays
the distance the car can travel on one tank of gas when driven in town and when driven on the
highway."

5/1/2023
*/

#include <iostream>
using namespace std;

int main(){
    int
        tankCapacity = 20; // Car tank capacity in gallons
    double
        townMpg = 23.5, // Miles per gallon when driven in town
        highwayMpg = 28.9, // Miles per gallon when driven on the highway
        
        townDistance, // The distance the car  can travel on a full tank of gas when driven in town
        highwayDistance; // The distance the car can travel on a full tank of gas when driven on the highway

    townDistance = townMpg * tankCapacity;
    highwayDistance = highwayMpg * tankCapacity;

    cout << "The distance the car can travel on a full tank of gas is" << endl;
    cout << townDistance << " miles in town." << endl;
    cout << highwayDistance << " miles on the highway.";

    return 0;
}