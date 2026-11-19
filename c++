#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (!cin) {
        cout << "Invalid input. Please enter a whole number." << endl;
        return 1;
    }

    // A number is even if it divides by 2 with no remainder.
    // This also works for negatives, since -3 % 2 is -1 (non-zero) and -4 % 2 is 0.
    if (number % 2 == 0) {
        cout << number << " is Even." << endl;
    } else {
        cout << number << " is Odd." << endl;
    }

    return 0;
}