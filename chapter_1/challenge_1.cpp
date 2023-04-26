//Programming challenge. Chapter 1 - Challenge 1.
//Calculate how much an organization earns selling candy bars.
#include <iostream>
using namespace std;

int main(){
    double candybars_sold,candybar_price,total_earned;

    cout << "How many candy bars were sold? " << endl;
    cin >> candybars_sold;

    cout << "How much does a candy bar cost?" << endl; 
    cin >> candybar_price;

    total_earned = candybar_price * candybars_sold;

    cout << "The total amount earned is $" << total_earned << endl;

    return 0;
}