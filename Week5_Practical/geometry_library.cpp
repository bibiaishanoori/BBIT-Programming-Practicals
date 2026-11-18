#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159;

// Function to calculate circle area
double circleArea(double radius) {
    return PI * radius * radius;
}

// Function to calculate rectangle area
double rectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate triangle area
double triangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Extra challenge: calculate circle circumference
double circleCircumference(double radius) {
    return 2 * PI * radius;
}

int main() {
    int choice;
    double radius, length, width, base, height;

    cout << fixed << setprecision(2);

    do {
        cout << endl;
        cout << "GEOMETRY CALCULATOR" << endl;
        cout << "===================" << endl;
        cout << "1. Area of a Circle" << endl;
        cout << "2. Area of a Rectangle" << endl;
        cout << "3. Area of a Triangle" << endl;
        cout << "4. Circle Circumference (Extra Challenge)" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter radius: ";
                cin >> radius;

                if (radius > 0) {
                    cout << "Circle Area: "
                         << circleArea(radius) << endl;
                } else {
                    cout << "Radius must be positive." << endl;
                }
                break;

            case 2:
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;

                if (length > 0 && width > 0) {
                    cout << "Rectangle Area: "
                         << rectangleArea(length, width) << endl;
                } else {
                    cout << "Dimensions must be positive." << endl;
                }
                break;

            case 3:
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter height: ";
                cin >> height;

                if (base > 0 && height > 0) {
                    cout << "Triangle Area: "
                         << triangleArea(base, height) << endl;
                } else {
                    cout << "Dimensions must be positive." << endl;
                }
                break;

            case 4:
                cout << "Enter radius: ";
                cin >> radius;

                if (radius > 0) {
                    cout << "Circle Circumference: "
                         << circleCircumference(radius) << endl;
                } else {
                    cout << "Radius must be positive." << endl;
                }
                break;

            case 0:
                cout << "Thank you for using the calculator!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}
