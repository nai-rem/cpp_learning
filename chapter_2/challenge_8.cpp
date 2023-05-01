/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 8: Land Calculation

"In the United States, land is often measured in square feet. In many other countries, it
is measured in square meters. One acre of land is equivalent to 43,560 square feet. A square
meter is equivalent to 10.7639 square feet. Write a program that computes and displays the
number of square feet and the number of square meters in 1/2 acre of land."

5/1/2023
*/

#include <iostream>
using namespace std;

int main(){
    double
        sqFeetInHalfAcre = 43560/2,
        sqMetersInHalfAcre;

    sqMetersInHalfAcre = sqFeetInHalfAcre / 10.7639;
    
    cout << "There are " << sqFeetInHalfAcre << " square feet in half an acre." << endl;
    cout << "There are " << sqMetersInHalfAcre << " square meters in half an acre." << endl;

    return 0;
}