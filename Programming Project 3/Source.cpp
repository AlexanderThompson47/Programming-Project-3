// this is project 3 for t programming project 3
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Declare variables
    double principal, rate, amount, interest;
    int timesCompounded;

    // Ask for input from the person
    cout << "Enter the principal: $";
    cin >> principal;

    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> rate;

    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> timesCompounded;

    // Convert the interest rate from percentage to decimal
    rate = rate / 100;

    ;

    // Calculate the amount in savings after one year
    amount = principal * pow(1 + rate / timesCompounded, timesCompounded);

    // Calculate the interest earned
    interest = amount - principal;

    // Display the results
    cout << fixed << setprecision(2);
    cout << "Interest rate: " << rate * 100 << "%" << endl;
    cout << "Times compounded: " << timesCompounded << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest: $" << interest << endl;
    cout << "Amount in savings: $" << amount << endl;

    return 0;
}