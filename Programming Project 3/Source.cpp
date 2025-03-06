// this is project 1 for the ingredient adjuster
#include <iostream>
using namespace std;

int main() {
    // Ingredient quantities for 48 cookies
    const double sugarPer48 = 1.5; // cups
    const double butterPer48 = 1.0; // cups
    const double flourPer48 = 2.75; // cups

    // Number of cookies you want to make
    int desiredCookies;
    cout << "Enter the number of cookies you want to make: ";
    cin >> desiredCookies;

    // amounts for the number of cookies you want
    double sugarNeeded = sugarPer48 * desiredCookies / 48;
    double butterNeeded = butterPer48 * desiredCookies / 48;
    double flourNeeded = flourPer48 * desiredCookies / 48;

    // Display the results
    cout << "To make " << desiredCookies << " cookies, you will need:\n";
    cout << sugarNeeded << " cups of sugar\n";
    cout << butterNeeded << " cups of butter\n";
    cout << flourNeeded << " cups of flour\n";

    return 0;
}