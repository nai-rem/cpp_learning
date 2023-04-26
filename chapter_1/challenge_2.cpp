//Programming challenge. Chapter 1 - Challenge 2.
//Calculate how much a baseball team spent last year to purchase new baseballs.

#include <iostream>
using namespace std;

int main(){
    double baseballs_purchased,baseball_price,total_spent;

    cout << "How many baseballs were purchased last year?" << endl;
    cin >> baseballs_purchased;

    cout << "How much does a baseball cost?" << endl; 
    cin >> baseball_price;

    total_spent = baseball_price * baseballs_purchased;

    cout << "The total amount spent on baseballs last year was $" << total_spent << endl;

    return 0;
}