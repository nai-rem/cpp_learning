/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 9: Flash Drive Price

"An electronics company makes a 64 gigabyte USB flash drive that costs them 8.00 apiece
to produce. Write a program that determines how much the company should sell them for if
it wants to make a 35 percent profit. Display the result on the screen."

5/1/2023
*/

#include <iostream>
using namespace std;

int main(){
    double 
        productionCost = 8.0,
        profitPercentage = 35.0,
        profitAmount,
        sellingPrice;
    
    profitAmount = productionCost / 100.0 * profitPercentage;
    sellingPrice = productionCost + profitAmount;

    cout << "The flash drives should be sold at $" << sellingPrice << " in order to make a " << profitPercentage << " percent profit." << endl;

    return 0;
} 