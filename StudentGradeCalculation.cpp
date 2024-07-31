#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "ENTER THE NUMBER OF STUDENT ENTRIES => ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name;
        int regNo, mark1, mark2, mark3;
        double average;
        char grade;

        cout << "ENTER THE STUDENT NAME => ";
        cin >> name;
        cout << "ENTER THE REGISTER NUMBER => ";
        cin >> regNo;
        cout << "MARK 1 => ";
        cin >> mark1;
        cout << "MARK 2 => ";
        cin >> mark2;
        cout << "MARK 3 => ";
        cin >> mark3;
        average = (mark1 + mark2 + mark3) / 3.0;
        if (average > 90) {
            grade = 'S';
        } else if (average > 80) {
            grade = 'A';
        } else if (average > 70) {
            grade = 'C';
        } else if (average > 60) {
            grade = 'D';
        } else if (average > 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }
        cout << "AVERAGE SCORE IS => " << average << endl;
        cout << grade << " GRADE" << endl;
    }
    return 0;
}
