/*
C++ Early Objects 10th Edition.
Chapter 2, Challenge 15: Video Game Levels

"
A novice player needed 78 minutes to complete Level 1 and 144 minutes to complete Level 2
of a new video game. Write a program that computes and displays in hours and minutes the
amount of time each level took and that tells how much longer it took the player to complete
Level 2 than Level 1.
"

5/2/2023
*/

#include <iostream>
using namespace std;

int main(){
    int
        levelOneCompletionTime = 79,
        levelTwoCompletionTime = 144,
        completionTimeDifference;

    completionTimeDifference = levelTwoCompletionTime - levelOneCompletionTime;

    cout << "It took " << levelOneCompletionTime / 60 << " hour(s) and " << levelOneCompletionTime % 60 << " minutes to complete level one." << endl;
    cout << "It took " << levelTwoCompletionTime / 60 << " hour(s) and " << levelTwoCompletionTime % 60 << " minutes to complete level two." << endl;
    cout << "Level two took " << completionTimeDifference / 60 << " hour(s) and " << completionTimeDifference % 60 << " minutes more to complete than level one." << endl;

    return 0;
}