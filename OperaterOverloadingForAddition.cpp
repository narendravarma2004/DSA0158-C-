#include <iostream>
using namespace std;
class Add {
public:
    int num;
    Add(int n) : num(n) {}
    Add operator+(const Add& other) {
        return Add(num + other.num);
    }
};
int main() {
	int n1,n2;
	cout<<"Enter 2 numbers to add";
	cin>>n1>>n2;
    Add a1(n1);
    Add a2(n2);
    Add a3 = a1 + a2;
    cout << "sum: " << a3.num << endl;
    return 0;
}
