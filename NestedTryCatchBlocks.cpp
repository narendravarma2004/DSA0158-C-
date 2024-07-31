#include <iostream>
using namespace std;

int main() {
    try {
        try {
            throw 20;
        } catch (int e) {
            cout << "Caught exception in inner try-catch block: " << e << endl;
            throw;  // Rethrow exception
        }
    } catch (int e) {
        cout << "Caught exception in outer try-catch block: " << e << endl;
    }

    return 0;
}
