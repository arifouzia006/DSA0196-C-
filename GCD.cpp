#include<iostream>
using namespace std;
int main(){
	int a=56,b=98;
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	int remainder;
	do{
		remainder=a%b;
		a=b;
		b=remainder;
	}while(remainder!=0);
	cout<<"GCD is"<<a<<endl;
	return 0;
}