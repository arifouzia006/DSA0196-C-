#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    // Attributes
    string make;
    string model;
    int year;
    string color;


    void displayDetails() {
        cout << "Car Details:" << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Color: " << color << endl;
    }
};

int main() {
    
    Car car1;
    car1.make = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;
    car1.color = "Red";

 
    Car car2;
    car2.make = "Honda";
    car2.model = "Civic";
    car2.year = 2021;
    car2.color = "Blue";

 
    cout << "Car 1:" << endl;
    car1.displayDetails();
    cout << endl;

    cout << "Car 2:" << endl;
    car2.displayDetails();
}
