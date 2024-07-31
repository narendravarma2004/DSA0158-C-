#include <iostream>
using namespace std;
int main() {
	char ch;
	cout<<"Enter the character = ";
	cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
		cout<<ch<<"is a vowel";
	}
	else if(ch>='a' && ch<='z') {
		cout<<ch<<"is a constant";
	}
	else {
		cout<<"It is not a character";
	}
	return 0;
}