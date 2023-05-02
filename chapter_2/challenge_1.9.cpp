/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 19: Annual High Temperatures

"
The average July high temperature is 85 degrees Farenheit in New York City,
88 degrees in Denver, and 106 degrees in Phoenix. Write a program that calculates
and reports what the new average high July temperature would be for each of these 
cities if temperatures to rise by 2 percent.
"

5/2/2023
*/

#include <iostream>
using namespace std;

int main(){
    double
        nyTemp = 85,
        denverTemp = 88,
        phoenixTemp = 106;

    //Add 2 percent to each temperature

    nyTemp = nyTemp + (nyTemp * 0.02);
    denverTemp = denverTemp + (denverTemp * 0.02);
    phoenixTemp = phoenixTemp + (phoenixTemp * 0.02);

    cout << "The new average temperature is:" << endl;
    cout << "New York: " << nyTemp << endl;
    cout << "Denver: " << denverTemp << endl;
    cout << "Phoenix: " << phoenixTemp << endl;

    return 0;
}