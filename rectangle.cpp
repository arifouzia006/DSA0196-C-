#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    float area() const {
        return length * width;
    }
    float perimeter() const {
        return 2 * (length + width);
    }
    void display() const {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};
int main() {
    Rectangle rect(5.0, 3.0);
    rect.display();
}
