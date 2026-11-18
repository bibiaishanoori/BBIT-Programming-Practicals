#include <iostream>
using namespace std;

// Recursive factorial function
long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorialRecursive(n - 1);
}

// Iterative factorial function
long long factorialIterative(int n) {
    long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int number;

    cout << "FACTORIAL CALCULATOR" << endl;
    cout << "====================" << endl;

    cout << "Enter a number (0 to 20): ";
    cin >> number;

    while (number < 0 || number > 20) {
        cout << "Invalid input! Enter a number from 0 to 20: ";
        cin >> number;
    }

    cout << endl;
    cout << "Using Recursion: "
         << factorialRecursive(number) << endl;

    cout << "Using Iteration: "
         << factorialIterative(number) << endl;

    return 0;
}
