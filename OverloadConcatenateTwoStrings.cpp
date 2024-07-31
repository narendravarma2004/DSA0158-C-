#include <iostream>
#include <cstring>
using namespace std;

string concatenate(string a, string b) {
    return a + b;
}
char* concatenate(char* a, char* b) {
    char* result = new char[strlen(a) + strlen(b) + 1];
    strcpy(result, a);
    strcat(result, b);
    return result;
}
int main() {
    string s1 = "Hello, ", s2 = "World!";
    char c1[] = "Good", c2[] = "Morning";
    cout << "Concatenated strings: " << concatenate(s1, s2) << endl;
    char* result = concatenate(c1, c2);
    cout << "Concatenated char arrays: " << result << endl;
    delete[] result;

    return 0;
}
