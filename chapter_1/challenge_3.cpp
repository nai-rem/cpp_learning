//Programming challenge. Chapter 1 - Challenge 3.
//Calculate the size of a rentangular garden in square feet.

#include <iostream>
using namespace std;

int main(){
    double length,width,area;

    cout << "Please enter the length of the garden in feet." << endl;
    cin >> length;

    cout << "Please enter the width of the garden in feet" << endl; 
    cin >> width;

    area = length * width;

    cout << "The area of the garden is " << area << " square feet." << endl;

    return 0;
}