#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

class Rectangle : public Shape {
    int length, width;

public:
    void area() {
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;

        cout << "Area of the rectangle: " << length * width << endl;
    }
};

class Triangle : public Shape {
    int base, height;

public:
    void area() {
        cout << "Enter base and height of the triangle: ";
        cin >> base >> height;

        cout << "Area of the triangle: " << (base * height) / 2.0 << endl;
    }
};

int main() {
    Rectangle r;
    Triangle t;

    r.area();
    cout << endl;
    t.area();

    return 0;
}