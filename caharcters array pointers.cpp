#include <iostream>
using namespace std;
int main() {
    char arr[5] = {'a', 'b', 'c', 'd', 'e'}; 
    char *ptr = arr;                
    cout << "The characters of the array are: ";
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";  
    }
    cout<<endl;
    cout<<ptr<<endl;
    return 0;
}