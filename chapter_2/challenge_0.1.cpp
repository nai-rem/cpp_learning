/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 1: Sum of Two Numbers.

"Write a program that stores the interger 50 and 100 in variables and stores
the sum of these two numberes in a variable named total. Display the total on the screen."

4/30/2023
*/

#include <iostream>
using namespace std;

int main(){
    int
        number1 = 50,
        number2 = 100,
        total;

    total = number1 + number2;
    cout << number1 << " plus " << number2 << " equals " << total << endl;
    return 0;
}