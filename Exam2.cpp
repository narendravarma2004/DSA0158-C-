#include <iostream>
using namespace std;
int getperson()
{
	int age;
	cout << "Enter the age of the person";
    cin >> age;
    return age;
}
int main() {
	getperson(age)
	if(age>18)
    {
        cout << "eligible to vote.";
    } else {
        cout << "You are allowed to vote after " << 18 - age << " years to eligible.";
    }
    return 0;
}
