#include <iostream>
using namespace std;

class Base
{
protected:
    int data1, data2;

public:
    Base(int a = 0, int b = 0)
    {
        data1 = a;
        data2 = b;
    }

    virtual ~Base()
    {
        cout << "Base destructor called." << endl;
    }
};

class Derived : public Base
{
public:
    Derived(int a, int b) : Base(a, b)
    {
    }

    void show()
    {
        cout << "data1 = " << data1 << endl;
        cout << "data2 = " << data2 << endl;
    }

    ~Derived()
    {
        cout << "Derived destructor called." << endl;
    }
};

int main()
{
    Derived *d = new Derived(10, 20);

    cout << "Values stored in Derived object:" << endl;
    d->show();

    delete d;

    return 0;
}