
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    // VARIABLE DECLARATIONS
    string studentName;
    string course;

    int score1, score2, score3;
    int totalScore;

    double average;
    double percentage;

    // CONSTANT DECLARATION
    const int MAX_SCORE = 100;

    // WELCOME BANNER
    cout << "========================================" << endl;
    cout << "       STUDENT SCORE CALCULATOR" << endl;
    cout << "========================================" << endl;

    // INPUT STUDENT NAME
    cout << "Enter student name: ";
    getline(cin, studentName);

    // INPUT COURSE
    cout << "Enter course (BBIT/BCS): ";
    getline(cin, course);

    // INPUT TEST SCORES
    cout << "Enter score for Test 1: ";
    cin >> score1;

    cout << "Enter score for Test 2: ";
    cin >> score2;

    cout << "Enter score for Test 3: ";
    cin >> score3;

    // VALIDATE SCORES
    if (score1 < 0 || score1 > MAX_SCORE ||
        score2 < 0 || score2 > MAX_SCORE ||
        score3 < 0 || score3 > MAX_SCORE) {

        cout << "Error: Scores must be between 0 and 100." << endl;
        return 1;
    }

    // CALCULATIONS
    totalScore = score1 + score2 + score3;
    average = totalScore / 3.0;
    percentage = (totalScore / 300.0) * 100;

    // FIND HIGHEST SCORE
    int highestScore = score1;

    if (score2 > highestScore) {
        highestScore = score2;
    }

    if (score3 > highestScore) {
        highestScore = score3;
    }

    // GRADE CALCULATION
    char grade;

    if (percentage >= 90) {
        grade = 'A';
    }
    else if (percentage >= 80) {
        grade = 'B';
    }
    else if (percentage >= 70) {
        grade = 'C';
    }
    else if (percentage >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    // DISPLAY REPORT CARD
    cout << endl;
    cout << "========================================" << endl;
    cout << "              REPORT CARD" << endl;
    cout << "========================================" << endl;

    cout << "Student: " << studentName << endl;
    cout << "Course: " << course << endl;

    cout << "Test 1: " << score1 << "/" << MAX_SCORE << endl;
    cout << "Test 2: " << score2 << "/" << MAX_SCORE << endl;
    cout << "Test 3: " << score3 << "/" << MAX_SCORE << endl;

    cout << "Total: " << totalScore << "/300" << endl;

    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    cout << "Highest Score: " << highestScore << endl;
    cout << "Grade: " << grade << endl;

    if (percentage >= 50) {
        cout << "Result: PASS" << endl;
    }
    else {
        cout << "Result: FAIL" << endl;
    }

    cout << "========================================" << endl;

    return 0;
}
