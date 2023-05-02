/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 14: Basketball Player Height    

"
The star player of a high school basketball team is 75 inches tall. Write a program to
compute and display the height in feet/inches form.
"

5/2/2023
*/


#include <iostream>
using namespace std;

int main(){
    int
        totalHeightInInches = 75,
        inches,
        feet;

    feet = totalHeightInInches / 12;
    inches = totalHeightInInches % 12;

    cout << "The star player is " << feet << "\'" << inches << " tall." << endl;

    return 0;
}