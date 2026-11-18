#include <iostream>
#include <string>
using namespace std;

int main() {

    // VARIABLE DECLARATIONS
    string name;
    string course;
    string hobby;
    string reason;
    string expectation;
    string definition;
    string favouriteFood;
    string dreamJob;

    // WELCOME MESSAGE
    cout << "========================================" << endl;
    cout << " WELCOME TO YOUR FIRST PROGRAM!" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // QUESTION 1
   cout << "1. What is your name? ";
getline(cin, name);

if (name.empty()) {
    cout << "You didn't enter a name!" << endl;
}

    // QUESTION 2
    cout << "2. What course are you doing? (BBIT/BCS): ";
    getline(cin, course);

    // QUESTION 3
    cout << "3. What is your hobby? ";
    getline(cin, hobby);

    // QUESTION 4
    cout << "4. Why did you choose this course? ";
    getline(cin, reason);

    // QUESTION 5
    cout << "5. What do you expect to learn in programming? ";
    getline(cin, expectation);

    // QUESTION 6
    cout << "6. In your own words, what is programming? ";
    getline(cin, definition);
    // QUESTION 7
cout << "7. What is your favourite food? ";
getline(cin, favouriteFood);

// QUESTION 8
cout << "8. What is your dream job? ";
getline(cin, dreamJob);

    // DISPLAY SUMMARY
    cout << endl;
cout << "============================================" << endl;
cout << "          MY PERSONAL PROFILE" << endl;
cout << "============================================" << endl;

cout << "| Name:             " << name << endl;
cout << "| Course:           " << course << endl;
cout << "| Hobby:            " << hobby << endl;
cout << "| Reason:           " << reason << endl;
cout << "| Expectation:      " << expectation << endl;
cout << "| Programming is:   " << definition << endl;
cout << "| Favourite Food:   " << favouriteFood << endl;
cout << "| Dream Job:        " << dreamJob << endl;

cout << "============================================" << endl;
cout << "Great job, " << name
     << "! You are on your way to becoming a programmer!"
     << endl;
cout << "============================================" << endl;

    return 0;
}