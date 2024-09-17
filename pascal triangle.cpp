#include<iostream>
using namespace std;
int main(){
  int n=5,i,j,k;
  for(i=1;i<=n;i++){
    int a=1;
    for(k=1;k<n-i;k++){
      cout<<" ";
    }
    for(j=1;j<=i;j++){
      cout<<a<<" ";
      a=a*(i-j)/j;
    }
    cout<<endl;
  }
  return 0;
}