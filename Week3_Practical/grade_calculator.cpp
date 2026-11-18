#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main() {

    int numberOfStudents;

    int countA = 0;
    int countB = 0;
    int countC = 0;
    int countD = 0;
    int countF = 0;

    cout << "===== CLASS GRADE CALCULATOR =====" << endl;

    cout << "How many students? ";
    cin >> numberOfStudents;

    if (numberOfStudents <= 0) {
        cout << "Invalid number of students!" << endl;
        return 1;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 1; i <= numberOfStudents; i++) {

        string studentName;
        double score;
        char grade;
        char modifier = ' ';

        cout << "\n===== STUDENT " << i << " =====" << endl;

        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter percentage score (0-100): ";
        cin >> score;

        while (score < 0 || score > 100) {
            cout << "Invalid score! Enter a score between 0 and 100: ";
            cin >> score;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Determine base grade

        if (score >= 90) {
            grade = 'A';
            countA++;
        }
        else if (score >= 80) {
            grade = 'B';
            countB++;
        }
        else if (score >= 70) {
            grade = 'C';
            countC++;
        }
        else if (score >= 60) {
            grade = 'D';
            countD++;
        }
        else {
            grade = 'F';
            countF++;
        }

        // Determine plus and minus modifiers

        if (grade != 'F') {

            int lastDigit = (int)score % 10;

            if (grade == 'A') {
                if (score >= 97)
                    modifier = '+';
                else if (score < 93)
                    modifier = '-';
            }

            else if (grade == 'B' || grade == 'C' || grade == 'D') {
                if (lastDigit >= 7)
                    modifier = '+';
                else if (lastDigit <= 3)
                    modifier = '-';
            }
        }

        // Display student report

        cout << "\n===== GRADE REPORT =====" << endl;

        cout << "Student: " << studentName << endl;

        cout << "Score: "
             << fixed << setprecision(1)
             << score << "%" << endl;

        cout << "Grade: " << grade;

        if (modifier != ' ')
            cout << modifier;

        cout << endl;

        // Personalized messages

        cout << "Message: ";

        switch (grade) {

            case 'A':
                cout << "Excellent work!" << endl;
                break;

            case 'B':
                cout << "Good job!" << endl;
                break;

            case 'C':
                cout << "Satisfactory." << endl;
                break;

            case 'D':
                cout << "Needs improvement." << endl;
                break;

            case 'F':
                cout << "Please seek help." << endl;
                break;
        }
    }

    // Final class summary

    cout << "\n===== CLASS SUMMARY =====" << endl;

    cout << "Total Students: " << numberOfStudents << endl;
    cout << "Grade A: " << countA << endl;
    cout << "Grade B: " << countB << endl;
    cout << "Grade C: " << countC << endl;
    cout << "Grade D: " << countD << endl;
    cout << "Grade F: " << countF << endl;

    cout << "\nThank you for using Grade Calculator!" << endl;

    return 0;
}