#include <iostream>
#include <stdexcept>
using namespace std;

int divideWithReturn(int a, int b) {
    if (b == 0) return -1;
    return a / b;
}

int divideWithException(int a, int b) {
    if (b == 0) throw runtime_error("Division by zero!");
    return a / b;
}

int main() {
    int result = divideWithReturn(10, 2);
    if (result == -1)
        cout << "Return code: Error" << endl;
    else
        cout << "Return code result: " << result << endl;

    try {
        cout << "Exception result: " << divideWithException(10, 2) << endl;
        cout << divideWithException(10, 0) << endl;
    } catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}
