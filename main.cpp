// Alphanzo Moore

//CIS-5 Online

// September 15, 2023

// Lab 4D: Alphanzo Moore - <Three Numbers in Order >

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    int low, middle, high;

    // Input
    cout << "Enter three integers between 1 and 500: ";
    cin >> num1 >> num2 >> num3;

    // Check if the input is within the specified range
    if ((num1 >= 1 && num1 <= 500) && (num2 >= 1 && num2 <= 500) && (num3 >= 1 && num3 <= 500)) {
        // Find the lowest number
        if (num1 <= num2 && num1 <= num3) {
            low = num1;
            if (num2 <= num3) {
                middle = num2;
                high = num3;
            } else {
                middle = num3;
                high = num2;
            }
        } else if (num2 <= num1 && num2 <= num3) {
            low = num2;
            if (num1 <= num3) {
                middle = num1;
                high = num3;
            } else {
                middle = num3;
                high = num1;
            }
        } else {
            low = num3;
            if (num1 <= num2) {
                middle = num1;
                high = num2;
            } else {
                middle = num2;
                high = num1;
            }
        }

        // Output the numbers in ascending order
        cout << "Numbers in ascending order: " << low << " " << middle << " " << high << endl;
    } else {
        cout << "Please enter integers between 1 and 500." << endl;
    }

    return 0;
}
