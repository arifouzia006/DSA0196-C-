#include<iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int num = 4;
    long long result = factorial(num);
    cout << "Factorial of " << num << " is= " << result << endl;
    return 0;
}
