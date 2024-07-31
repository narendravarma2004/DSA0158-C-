#include <iostream>
using namespace std;
class Person {
public:
    virtual void work() {
        cout << "Person is working" << endl;
    }
};
class Employee : public Person {
public:
    void work() override {
        cout << "Employee is working" << endl;
    }
};
class Manager : public Person {
public:
    void work() override {
        cout << "Manager is working" << endl;
    }
};
int main() {
    Person* p;
    Employee e;
    Manager m;
    p = &e;
    p->work();
    p = &m;
    p->work();
    return 0;
}
