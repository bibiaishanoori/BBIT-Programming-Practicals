#include <iostream>
using namespace std;

void createLeak() {
    int* ptr = new int(42);

    cout << "Inside leak function. Value: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    // Intentional memory leak: delete is omitted.
    // The pointer is lost when the function ends.
}

void fixLeak() {
    int* ptr = new int(42);

    cout << "Inside fixed function. Value: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    delete ptr;
    ptr = nullptr;

    cout << "Memory has been successfully freed." << endl;
}

int main() {
    cout << "--- Testing Memory Leak ---" << endl;
    createLeak();

    cout << "\n--- Testing Memory Leak Fix ---" << endl;
    fixLeak();

    cout << "\nProgram completed." << endl;

    return 0;
}
