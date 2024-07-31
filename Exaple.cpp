#include<iostream>
using namespace std;

bool ispalindrome(string str)
{
	int n=str.length();
	for(int i=0;i<=n/2;i++)
	{
		if (str[i] != str[n-i-1])
		return false;
	}
	return true;
}
int main()
{
	string str;
	cout<<"Enter a string";
	cin>>str;
	if(ispalindrome(str))
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not palindrome";
	}
}