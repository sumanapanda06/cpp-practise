#include <iostream>
using namespace std;
int main () {
    int n1;
    int n2;
    int n3;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    cout<<"Enter third number: ";
    cin>>n3;

    if (n1>n2 && n1>n3) {
        cout<<n1<<" is greatest";
    }
    else if(n2>n1 && n2>n3) {
        cout<<n2<<" is greatest";
    }
    else if(n3>n1 && n3>n2) {
        cout<<n3<<" is greatest";
    }
    else {
        cout<<"all three are equal";
    }
    return 0;
}