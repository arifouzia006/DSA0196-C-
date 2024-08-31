#include<iostream>
using namespace std;
int main(){
	int n=371,temp=n,sum=0,r;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(temp==sum)
	cout<<"armstrong";
	else
	cout<<"not armstrong";
}