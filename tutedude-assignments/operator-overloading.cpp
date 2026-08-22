#include <iostream>
using namespace std;

class Number {
public:
    int value;

    void input() {
        cin >> value;
    }

    Number operator+(Number n) {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }

    void display() {
        cout << "Result: " << value << endl;
    }
};

int main() {
    Number n1, n2, n3;

    cout << "Enter first number: ";
    n1.input();

    cout << "Enter second number: ";
    n2.input();

    n3 = n1 + n2;

    n3.display();

    return 0;
}