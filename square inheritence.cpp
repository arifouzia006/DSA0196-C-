#include <iostream>
using namespace std;
class Number {
protected:
    int num;
public:
    Number(int n) : num(n) {}
    void displayNumber() {
        cout << "Number: " << num << endl;
    }
};
class Square : public Number {
public:
    Square(int n) : Number(n) {}
    int calculateSquare() {
        return num * num;
    }
};
int main() {
    Square sq(5);
    sq.displayNumber();
    cout << "Square: " << sq.calculateSquare() << endl;
    return 0;
}
