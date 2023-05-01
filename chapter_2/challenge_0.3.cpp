/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 3: Sales Tax

"Write a program that computes the sales tax and total price on a $95 purchase.
Assume the state sales tax is 6.5 percent and the county sales tax is 2 percent.
Display the purchase price, total tax, and total price on screen."

5/1/2023
*/

#include <iostream>
using namespace std;

int main(){
    double
        purchasePrice = 95.0,
        taxPrice,
        totalPrice,

        stateTaxPercentage = 6.5,
        countyTaxPercentage = 2.0,
        totalTaxPercentage;

    totalTaxPercentage = stateTaxPercentage + countyTaxPercentage;
    taxPrice = purchasePrice / 100.0 * totalTaxPercentage;
    totalPrice = purchasePrice + taxPrice;

    cout << "Purchase price: $" << purchasePrice << endl;
    cout << "Total tax: $" << taxPrice << endl;
    cout << "Total price: $" << totalPrice << endl;

    return 0;
}