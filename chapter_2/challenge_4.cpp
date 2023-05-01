/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 4: Restaurant Bill

"Write a program that computes the tax and tip on a restaurant bill for a patron with
a $44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip should be
15 percent of the total after adding the tax. Display the meal cost, tax amount, tip amount,
and total bill on the screen,"

5/1/2023
*/

#include <iostream>
using namespace std;

int main(){
    double
        mealPrice = 44.50,
        taxPercentage = 6.75,
        tipPercentage = 15.0,
        taxAmount,
        tipAmount,
        totalPrice;

    taxAmount = mealPrice / 100.0 * taxPercentage;
    totalPrice = mealPrice + taxAmount; // Initialize totalPrice with the meal price, and add the tax amount.
    tipAmount = totalPrice / 100.0 * tipPercentage;
    totalPrice = totalPrice + tipAmount; // Add the tip amount to the total price.

    cout << "Meal price :$" << mealPrice << endl;
    cout << "Tax: $" << taxAmount << endl;
    cout << "Tip: $" << tipAmount << endl;
    cout << "Total: $" << totalPrice << endl;

    return 0;
}