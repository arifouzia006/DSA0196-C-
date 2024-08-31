#include <iostream>
using namespace std;
int main() {
    string str = "madam";  
    int start = 0;
    int end = str.length() - 1;
    int result = 1; 
    while (start < end && result) {
        if (str[start] != str[end]) {
            result = 0;  
        }
        start++;
        end--;
    }
    cout << "\"" << str << "\" is " << (result ? "a palindrome." : "not a palindrome.") << endl;
    return 0;
}