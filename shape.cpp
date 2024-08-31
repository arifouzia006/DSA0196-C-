#include <iostream>
using namespace std;
class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h, double w) : height(h), width(w) {}

    virtual double area() {
        return 0;
    }
    virtual double perimeter() {
        return 0;
    }
};
class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}
    double area() override {
        return height * width;
    }
    double perimeter() override {
        return 2 * (height + width);
    }
};
class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}
    double area() override {
        return 0.5 * height * width;
    }
    double perimeter() override {
        return 3 * width;
    }
};
int main() {
    Rectangle rect(10, 5);
    cout << "Rectangle Area: " << rect.area() << endl;
    Triangle tri(8, 6);
    cout << "Triangle Area: " << tri.area() << endl;
    cout << "Triangle Perimeter: " << tri.perimeter() << endl;
    return 0;
}
