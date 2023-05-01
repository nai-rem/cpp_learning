/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 7: Number of Acres

"One acre of land is equivalent to 43,450 square feet. Write a program that calculates and
displays the number of acres on a tract of land whose size is 869 x 360 feet."

5/1/2023
*/

#include <iostream>
using namespace std;

int main(){
    double
        landArea = 869 * 360,
        landAreaInAcres;
    
    landAreaInAcres = landArea / 43450;

    cout << "The land area is " <<  landAreaInAcres << " acres." << endl;

    return 0;
}