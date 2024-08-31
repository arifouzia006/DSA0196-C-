#include <iostream>
using namespace std;
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);  
    }
}
int main() {
    int number = 5; 
    int fact = factorial(number);
    cout << "The factorial of " << number << " is " << fact << "." << endl;
    return 0;
}
