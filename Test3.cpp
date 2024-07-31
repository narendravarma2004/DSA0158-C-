#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter a number ";
	cin>>num;
	int temp=num;
	while(temp !=0)
	{
		sum+=temp%10;
		temp=temp/10;
	}
	if(num%sum==0)
	{
		cout<<"The number is harshad number";
	}
	else
	{
		cout<<"The number is not harshad number";
	}
	return 0;
}