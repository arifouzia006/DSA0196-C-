#include<iostream>
using namespace std;
int main(){
	string s="fouzu";
	string* ptr=&s;
	cout<<"value of s:"<<*ptr<<endl;
	cout<<"address of s:"<<ptr<<endl;
	return 0;
}