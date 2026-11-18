#include <iostream>
using namespace std;

// Pass by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside swapByValue: a = " << a
         << ", b = " << b << endl;
}

// Pass by Reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Before swapByValue: x = " << x
         << ", y = " << y << endl;

    swapByValue(x, y);

    cout << "After swapByValue: x = " << x
         << ", y = " << y << endl;

    cout << "\nBefore swapByReference: x = " << x
         << ", y = " << y << endl;

    swapByReference(x, y);

    cout << "After swapByReference: x = " << x
         << ", y = " << y << endl;

    return 0;
}