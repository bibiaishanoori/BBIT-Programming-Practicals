#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("missing.txt");
    int value;

    if (!file) {
        cerr << "Error: Could not open file." << endl;
        return 1;
    }

    file >> value;
    cout << "Value: " << value << endl;
    return 0;
}
