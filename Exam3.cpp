#include <iostream>
using namespace std;
class CubeCalculator {
    int n;
public:
    CubeCalculator(int num){
    	int n=num;
        for (int i = 1; i <= num; i++) {
            cout << "the Cube of " << i << " is " << (i * i * i)<<"\n";
        }
    }
};
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    CubeCalculator calculator(num);
    return 0;
}
