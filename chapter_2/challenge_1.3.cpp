/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 13: Pay Period Gross Pay

"
A particular employee earns $39,000 annnually. Write a program that determines and displays
what the amount of his gross pay will be for each pay period if he is paid twice a month (24 pay checks per year)
and if he is paid bi-weekly (26 pay checks per year).
"

5/2/2023
*/

#include <iostream>
using namespace std;

int main(){
    int
        annualPay = 39000,
        bimonthlyChecks = 24, // The amount of checks received per year if the employee is paid bimonthly
        biweeklyChecks = 26; // The amount of checks received per year if the employee is paid biweekly

        cout << "Bimonthly gross pay: $" << annualPay / bimonthlyChecks << endl;
        cout << "Biweekly gross pay: $" << annualPay / biweeklyChecks << endl;
    return 0;
}