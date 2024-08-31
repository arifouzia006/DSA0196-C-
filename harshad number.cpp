#include<iostream>
using namespace std;
int main(){
	int n=18,temp=n,sum=0,r;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(temp%sum==0)
	cout<<"harshad number";
	else
	cout<<"not harshad number";
}