#include<iostream>
using namespace std;
int main(){
	int n=8,i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	cout<<"perfect number";
	else
	cout<<"not perfect number";
}