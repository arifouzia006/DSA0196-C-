#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    string name;
    int d;
    double salary;
};

class Manager : public Employee {
public:
    string department;
    double bonus;
};

class Engineer : public Employee {
public:
    string specialty;
    int hours;
};

int main() {

    Manager m;
    m.name = "fouzu";
    m.d = 666;
    m.salary = 16000.6;
    m.department = "HR";
    m.bonus = 6000;

 
    cout << "Manager Name: " << m.name << endl;
    cout << "Manager ID: " << m.d << endl;
    cout << "Manager Salary: $" << m.salary << endl;
    cout << "Manager Department: " << m.department << endl;
    cout << "Manager Bonus: $" << m.bonus << endl;


    Engineer e;
    e.name = "ziah";
    e.d = 22;
    e.salary = 60000;
    e.specialty = "Software engineer";
    e.hours = 40;


    cout << "Engineer Name: " << e.name << endl;
    cout << "Engineer ID: " << e.d << endl;
    cout << "Engineer Salary: $" << e.salary << endl;
    cout << "Engineer Specialty: " << e.specialty << endl;
    cout << "Engineer Hours: " << e.hours << endl;

    return 0;
}
