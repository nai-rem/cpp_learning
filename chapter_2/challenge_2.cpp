/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 2: Sales Prediction.

"The East Coast sales division of a company generates 58 percent of total sales.
Based on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales that year. Display the result on the screen."

4/30/2023
*/

#include <iostream>
using namespace std;

int main(){
    double
        eastCoastSalesPercentage = 58,
        companyTotalSales = 8.6e6;
    int
        eastCoastSales;

    eastCoastSales = companyTotalSales / 100.0 * eastCoastSalesPercentage;
    cout << "The east coast division will generate $" << eastCoastSales << " in sales.\n";

    return 0;
}