#include <iostream>
using namespace std;
void sayHello() {
    cout << "Hello, World!" << endl;
}
int main() {
    void (*funcPtr)() = sayHello;
     cout << "Address'sayHello': " << (void*)funcPtr << endl;
    funcPtr();
    return 0;
}
