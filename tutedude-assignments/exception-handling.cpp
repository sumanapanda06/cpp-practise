#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter the numerator: ";
    cin>>a;

    cout<<"Enter the denominator: ";
    cin>>b;

    try {
        if(b==0) {
            throw b;
        }
        cout<<"Division: "<<a/b<<endl;
    }
    catch(int) {
        cout<<"division by zero not possible"<<endl;
    }
    return 0;
}