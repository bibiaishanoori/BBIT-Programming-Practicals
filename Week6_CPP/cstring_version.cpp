#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Declare a C-string with a maximum size
    char name[50];

    cout << "Enter your name: ";
    cin.getline(name, 50);

    cout << "Name: " << name << endl;
    cout << "Length: " << strlen(name) << endl;
    cout << "First character: " << name[0] << endl;

    // Copy the C-string
    char copy[50];
    strcpy(copy, name);
    cout << "Copy: " << copy << endl;

    return 0;
}
