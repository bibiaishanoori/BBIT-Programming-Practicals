#include <iostream>
using namespace std;

// Global variable
int globalNumber = 100;

void displayScope() {
    // Local variable
    int localNumber = 50;

    cout << "Inside displayScope():" << endl;
    cout << "Global Number: " << globalNumber << endl;
    cout << "Local Number: " << localNumber << endl;
}

int main() {
    // Local variable in main
    int mainNumber = 25;

    cout << "GLOBAL AND LOCAL VARIABLE SCOPE" << endl;
    cout << "================================" << endl;

    cout << "Global Number: " << globalNumber << endl;
    cout << "Main Local Number: " << mainNumber << endl;

    cout << endl;
    displayScope();

    cout << endl;
    cout << "Global variable can be accessed anywhere." << endl;
    cout << "Local variables are accessible only inside their function." << endl;

    return 0;
}
