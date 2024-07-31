#include <iostream>
using namespace std;
class DecimalToBinary {
public:
    DecimalToBinary(int n) {
        while (n > 0) {
            cout << n % 2;
            n /= 2;
        }
        cout << endl;
    }
};
int main() {
	int n;
	cout<<"Enter a number deciaml Number ";
	cin>>n;
    DecimalToBinary dtb(n);
    return 0;
}