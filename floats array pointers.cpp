#include <iostream>
using namespace std;
int main() {
    float arr[5] = {1.0, 2.3, 3.4, 4.5, 5.6}; 
    float *ptr = arr;               
    cout << "The array: ";
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";  
    }
    cout<<endl;
    cout<<ptr<<endl;
    return 0;
}