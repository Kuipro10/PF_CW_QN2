#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find and print the divisors of a positive integer
void printDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    // Print divisors in decreasing order
    sort(divisors.rbegin(), divisors.rend());
    for (int divisor : divisors) {
        cout << divisor << endl;
    }
}

int main() {
    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you.\n";
    cout << "The program will repeatedly prompt you to enter a positive integer.\n";
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order.\n";
    
    while (true) {
        int number;
        cout << "Please enter a positive integer: ";
        cin >> number;

        // Check if the input is positive
        if (number <= 0) {
            cout << number << " is not a positive integer.\n";
            continue; // Prompt the user again
        }

        // Print divisors of the entered number
        printDivisors(number);

        char choice;
        while (true) {
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;
            
            // Check if the input is valid
            if (choice == 'Y' || choice == 'y') {
                break; // Continue the main loop
            } else if (choice == 'N' || choice == 'n') {
                cout << "Program terminated.\n";
                return 0; // Exit the program
            } else {
                cout << "Please respond with Y (or y) for yes and N (or n) for no.\n";
            }
        }
    }
}
