#include<iostream>
using namespace std;
double circle(int r)
{
	double result=3.14*r*r;
	return result;
}
int main()
{
	int r=6;
	cout<<"area of circle:"<<circle(r);
	return 0;
}