#include<iostream>
using namespace std;
int prime(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count=count+1;
		}
	}
	if(count==2)
	{
		cout<<n<<" is a prime number";
	}
	else
	{
		cout<<n<<" is not a prime number";
	}
	return 0;
}
int main(){
	int n=5;
	prime(n);
	return 0;
	
}