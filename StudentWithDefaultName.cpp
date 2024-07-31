#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student() {
        name = "Unknown";
    }

    Student(string n) {
        name = n;
    }
};

int main() {
    Student s1("Jhon");
    Student s2;

    cout << s1.name << " " << s2.name << endl;

    return 0;
}
