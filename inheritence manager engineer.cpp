#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int id;
    double salary;

    Employee(string n;
	 int i, double s) : name(n), id(i), salary(s) {}
};


class Manager : public Employee {
public:
    string department;
    double bonus;

    Manager(string n, int i, double s, string d, double b)
        : Employee(n, i, s), department(d), bonus(b) {}
};


class Engineer : public Employee {
public:
    string specialty;
    int hours;

    Engineer(string n, int i, double s, string sp, int h)
        : Employee(n, i, s), specialty(sp), hours(h) {}
};

int main() {
    Manager manager("Alice", 101, 80000.0, "HR", 5000.0);
    Engineer engineer("Bob", 102, 70000.0, "Software", 120);

  
    cout << "Manager Name: " << manager.name << endl;
    cout << "Manager ID: " << manager.id << endl;
    cout << "Manager Salary: $" << manager.salary << endl;
    cout << "Manager Department: " << manager.department << endl;
    cout << "Manager Bonus: $" << manager.bonus << endl;


    cout << "Engineer Name: " << engineer.name << endl;
    cout << "Engineer ID: " << engineer.id << endl;
    cout << "Engineer Salary: $" << engineer.salary << endl;
    cout << "Engineer Specialty: " << engineer.specialty << endl;
    cout << "Engineer Hours Worked: " << engineer.hours << endl;

    return 0;
}
