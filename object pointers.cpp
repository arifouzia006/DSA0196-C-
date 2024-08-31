#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    Person(string n, int a) : name(n), age(a) {}
};
int main() {
    Person person("fouzu", 19);
    Person* ptr = &person;
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "Address: " << ptr << endl;
    return 0;
}
