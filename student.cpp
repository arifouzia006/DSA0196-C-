#include <iostream>
using namespace std;

class Student {
public:
    // Constructor
    Student(string name, int rollNumber, int age) {
        cout << "Student created." << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student record destroyed." << endl;
    }
};

int main() {
    // Create a Student object
    Student student("Alice", 101, 20);

    return 0;
}