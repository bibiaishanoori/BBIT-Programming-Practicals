#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    // Variables
    string studentName;
    string course;

    int score1, score2, score3, score4;
    int totalScore;
    int highestScore;

    double average;
    double percentage;

    char grade;

    const int MAX_SCORE = 100;

    // Welcome Message
    cout << "====================================" << endl;
    cout << "       STUDENT SCORE CALCULATOR" << endl;
    cout << "====================================" << endl;

    // Student Information
    cout << "\nEnter your full name: ";
    getline(cin, studentName);

    cout << "Enter your course (BBIT/BCS): ";
    getline(cin, course);

    // Enter Test Scores
    cout << "\nEnter Test 1 score: ";
    cin >> score1;

    cout << "Enter Test 2 score: ";
    cin >> score2;

    cout << "Enter Test 3 score: ";
    cin >> score3;

    cout << "Enter Test 4 score: ";
    cin >> score4;
        if (score1 < 0 || score1 > 100 ||
        score2 < 0 || score2 > 100 ||
        score3 < 0 || score3 > 100 ||
        score4 < 0 || score4 > 100) {

        cout << "Invalid score! Scores must be between 0 and 100." << endl;

        return 1;
    }

    // Calculate Total Score
    totalScore = score1 + score2 + score3 + score4;

    // Calculate Average and Percentage
    average = totalScore / 4.0;

    percentage = (totalScore / 400.0) * 100;

    // Calculate Letter Grade
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

    // Find Highest Score
    highestScore = score1;

    if (score2 > highestScore) {
        highestScore = score2;
    }

    if (score3 > highestScore) {
        highestScore = score3;
    }

    if (score4 > highestScore) {
        highestScore = score4;
    }

    // Display Report Card
    cout << "\n====================================" << endl;
    cout << "             REPORT CARD" << endl;
    cout << "====================================" << endl;

    cout << "Student Name: " << studentName << endl;
    cout << "Course: " << course << endl;

    cout << "------------------------------------" << endl;

    cout << "Test 1: " << score1 << "/" << MAX_SCORE << endl;
    cout << "Test 2: " << score2 << "/" << MAX_SCORE << endl;
    cout << "Test 3: " << score3 << "/" << MAX_SCORE << endl;
    cout << "Test 4: " << score4 << "/" << MAX_SCORE << endl;

    cout << "------------------------------------" << endl;

    cout << "Total Score: " << totalScore << "/400" << endl;
    cout << "Highest Score: " << highestScore << endl;

    cout << fixed << setprecision(2);

    cout << "Average: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    cout << "Letter Grade: " << grade << endl;

    cout << "------------------------------------" << endl;

    // Pass or Fail
    if (percentage >= 50) {
        cout << "Result: PASS" << endl;
    }
    else {
        cout << "Result: FAIL" << endl;
    }

    cout << "====================================" << endl;
    cout << "       THANK YOU FOR USING!" << endl;
    cout << "====================================" << endl;

    return 0;
}