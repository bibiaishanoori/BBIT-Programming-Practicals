#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << "========================================" << endl;
    cout << "       MULTIPLICATION TABLE (1 to 10)" << endl;
    cout << "========================================" << endl;

    cout << setw(5) << "X";

    for (int j = 1; j <= 10; j++) {
        cout << setw(5) << j;
    }

    cout << endl;

    cout << "--------------------------------------------------"
         << endl;

    for (int i = 1; i <= 10; i++) {

        cout << setw(5) << i;

        for (int j = 1; j <= 10; j++) {

            cout << setw(5) << i * j;
        }

        cout << endl;
    }

    cout << "========================================" << endl;

    return 0;
}