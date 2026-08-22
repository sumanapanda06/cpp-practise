#include <iostream>
using namespace std;
class calculator {
    public:
    void sum(int a, int b) {
        cout<<"Sum of two integers: "<<a+b<<endl;
    }
    void sum(double a, double b) {
        cout<<"Sum of two doubles: "<<a+b<<endl;
    }
    void sum(int a, int b, int c) {
        cout<<"Sum of three integers: "<<a+b+c<<endl;
    }
};
int main() {
    calculator c;
    c.sum(3,4);
    c.sum(3.5,5.3);
    c.sum(3,6,7);

    return 0;
}