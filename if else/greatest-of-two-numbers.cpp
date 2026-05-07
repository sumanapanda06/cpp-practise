#include <iostream>
using namespace std;
int main () {
    int n1;
    cout<<"Enter first number: ";
    cin>>n1;
    int n2;
    cout<<"Enter second number: ";
    cin>>n2;
    if (n1>n2) {
        cout<<"Greatest is: "<<n1;
    }
    else if (n2>n1) {
        cout<<"Greatest is: "<<n2;
    }
    else {
        cout<<"Both are equal";
    }
    return 0;
}