#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ofstream out("students.csv");
    out << "Alice,80\nBob,90\nCharlie,70\nInvalid,abc\n";
    out.close();

    ifstream file("students.csv");
    if (!file) {
        cerr << "Cannot open CSV file." << endl;
        return 1;
    }

    string line, name, scoreText;
    double score, total = 0;
    int count = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        if (!getline(ss, name, ',') || !getline(ss, scoreText, ',')) {
            cout << "Skipping malformed row." << endl;
            continue;
        }

        try {
            size_t pos;
            score = stod(scoreText, &pos);
            if (pos != scoreText.size()) throw invalid_argument("Invalid score");

            cout << name << ": " << score << endl;
            total += score;
            count++;
        } catch (...) {
            cout << "Skipping invalid row: " << line << endl;
        }
    }

    if (count > 0)
        cout << "Average score: " << total / count << endl;
    else
        cout << "No valid records found." << endl;

    file.close();
    return 0;
}
