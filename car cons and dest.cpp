#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << "Car object created: " << brand << " " << model << " (" << year << ")" << endl;
    }

    ~Car() {
        cout << "Car object destroyed: " << brand << " " << model << " (" << year << ")" << endl;
    }
};

int main() {

    Car myCar("Toyota", "Camry", 2020);

    return 0;
}
