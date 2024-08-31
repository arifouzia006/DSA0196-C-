#include<iostream>
using namespace std;
int main(){
	int num=12;
	int* ptr=&num;
	cout<<"value of num:"<<*ptr<<endl;
	cout<<"address :"<<ptr<<endl;
	return 0;
}