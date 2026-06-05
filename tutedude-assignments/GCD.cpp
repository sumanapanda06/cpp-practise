#include<iostream>
using namespace std;
int gcd(int num1, int num2) {
    int value;
    while(num1%num2!=0) {
        value=num1%num2;
        num1=num2;
        num2=value;
    }
    return num2;
}
int main() {
    int num1;
    cout<<"Enter first number: ";
    cin>>num1;

    int num2;
    cout<<"Enter second number: ";
    cin>>num2;

    int GCD=gcd(num1,num2);
    cout<<"for the input "<<num1<<" and "<<num2<<" GCD is: "<<GCD;

    return 0;
}