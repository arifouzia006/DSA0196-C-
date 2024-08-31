#include<iostream>
using namespace std;
int main(){
	float num=12.7;
	float * ptr=&num;
	cout<<"value of num:"<<*ptr<<endl;
	cout<<"address of num:"<<ptr<<endl;
	return 0;
}