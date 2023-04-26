#include <iostream>
using namespace std;

int main()
    {
        double hours, rate, pay;
        cout << "How many hours did you work? ";
        cin >> hours;
        cout << "How much do you get paid an hour? ";
        cin >> rate; 
        pay = rate * hours;
        cout << "You made $" << pay << endl;
        return 0;
    }