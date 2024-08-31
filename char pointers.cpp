#include<iostream>
using namespace std;
int main(){
	char letter='m';
	char* ptr=&letter;
	cout<<"the value of letter:"<<*ptr<<endl;
	cout<<"the address of letter:"<<ptr<<endl;
	return 0;
}