#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "This is the Base class." << endl;
    }

    virtual ~Base()
    {
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "This is the Derived class." << endl;
    }
};

int main()
{
    Base *bp = new Derived;
    Derived *dp = new Derived;

    cout << "Base pointer pointing to Derived object:" << endl;
    bp->show();

    cout << "Derived pointer pointing to Derived object:" << endl;
    dp->show();

    delete bp;
    delete dp;

    return 0;
}