//Programming challenge. Chapter 1 - Challenge 4.
//Calculates the total price to construct the garden mentioned in challenge 3.

#include <iostream>
using namespace std;

int main(){
    double soil_price,seeds_price,fence_price,total_price;

    cout << "Please enter the amount spent on soil." << endl;
    cin >> soil_price;

    cout << "Please enter the amount spent on seeds" << endl; 
    cin >> seeds_price;
    
    cout << "Please enter the amount spent on the fence" << endl; 
    cin >> fence_price;

    total_price = soil_price + seeds_price + fence_price;

    cout << "The total amount spent on constructing the garden is $" << total_price << endl;

    return 0;
}