#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int rollNo;
    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void showDetails() {
        cout << "Name: " << name << ", Roll Number: " << rollNo << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student* students = new Student[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter details for student " << i + 1 << endl;
        students[i].getDetails();
    }
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; ++i) {
        students[i].showDetails();
    }
    delete[] students;
    return 0;
}
