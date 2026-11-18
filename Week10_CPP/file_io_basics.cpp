#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("numbers.txt");
    if (!outFile) {
        cerr << "Error creating file." << endl;
        return 1;
    }

    outFile << "10 20 30 40 50";
    outFile.close();

    ifstream inFile("numbers.txt");
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    int number, sum = 0;
    while (inFile >> number) sum += number;

    cout << "Sum of numbers: " << sum << endl;
    inFile.close();
    return 0;
}
