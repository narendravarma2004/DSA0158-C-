#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displaydata() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Admin : virtual public Person {
public:
    void getdata() {
        Person::getdata();
    }

    void displaydata() {
        Person::displaydata();
    }
};

class Account : virtual public Person {
public:
    void getdata() {
        Person::getdata();
    }

    void displaydata() {
        Person::displaydata();
    }
};

class Master : public Admin, public Account {
public:
    void getdata() {
        Admin::getdata();
    }

    void displaydata() {
        Admin::displaydata();
    }

    void bonus() {
        cout << "Bonus: " << (age * 100) << endl;
    }
};

int main() {
    Master emp;
    emp.getdata();
    emp.displaydata();
    emp.bonus();

    return 0;
}
