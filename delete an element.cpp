#include<iostream>
using namespace std;
int main(){
  int array[]={1,2,3,4,5};
  int size=5;
  int pos=2;
  
  for(int i = pos;i<size-1;++i){
    array[i]=array[i+1];
  }
  size--;
  cout<<"array after deleting the element:";
  for(int i=0;i<size;++i){
    cout<<array[i]<<" ";
  }
  cout<<endl;
  return 0;
}