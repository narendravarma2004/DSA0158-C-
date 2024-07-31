#include<iostream>
using namespace std;
int main()
{
	int n;
	bool isprime;
	cout<<"Enter a number";
	cin>>n;
	isprime=true;
	if(n<=1){
		isprime=false;
	}
	if(n>2)
	{
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				isprime=false;
				break;
			}
		}
	}
	if(isprime)
	{
		cout<<"Prime number";
		
	}
	else
	{
		cout<<"Not prime number";
	}
}