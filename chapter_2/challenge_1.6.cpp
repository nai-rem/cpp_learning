/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 16: Energy Drink Consumption

"
A soft drink company recently surveyed 16,500 of its customers and found that approximately
15 percent of those surveyed purchase one or more energy drinks per week. Of those customers
who purchase eneergy drinks, approximately 52 percent of them purchase citrus flavored energy
drinks. Write a program that displays the following information:
    - The approximate number of customers in the survey who purchase one or more energy drinks per week.
    - The approximate number of customers in the survey who purchase citrus flavored energy drinks.
"


5/2/2023
*/

#include <iostream>
using namespace std;

int main(){
    int
        surveyedCustomers = 16500,
        purchasers,
        citrusPurchasers;

    purchasers = 16500 / 100 * 15; // 15 percent of surveyed customers purchase one or more energy drinks per week.
    citrusPurchasers = purchasers / 100 * 52; // 52 percent of energy drink purchasers buy citrus flavored energy drinks.

    cout << "Of the " << surveyedCustomers << " customers who participated in the survey, approximately " << purchasers << " of the customers said they purchase one or more energy drinks per week." << endl;
    cout << "Of the customers who said they purchase energy drinks weekly, approximately " << citrusPurchasers << " of them said they purchase citrus flavored energy drinks." << endl;

    return 0;
}