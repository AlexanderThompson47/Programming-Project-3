// this is project 2 for the math tutor
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate two random numbers
    int num1 = rand() % 1000;// Random number between 0 and 999
    int num2 = rand() % 1000; // Random number between 0 and 999

    // Display the numbers to be added
    cout << "Solve the following addition problem:\n";
    cout << num1 << " + " << num2 << " = ?" << endl;

    // Pause the screen while the student works on the problem
    cout << "Press Enter when you're ready to see the answer...";
    cin.get(); //wait for the person to perss enter

    // Display the correct solution
    int solution = num1 + num2;
    cout << num1 << " + " << num2 << " = " << solution << endl;

    return 0;
}