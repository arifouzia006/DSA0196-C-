#include <iostream>
using namespace std;

class student {
public:
    string name;
    int classnumber;


    student(string n,int c) {
        name = n;
        classnumber = c;
        cout << "student created: \"" << name << "\" studying in  " << classnumber << ". " << endl;
    }


    ~student() {
        cout << "student destroyed" << endl;
    }
};

int main() {

    student std("fouzia",15);


    return 0;
}
