#include<iostream>
using namespace std;
int main() {
    cout<<"SIMPLE CALCULATOR\n\n";
    int a;
    cout<<"Enter value of a: ";
    cin>>a;
    int b;
    cout<<"Enter value of b: ";
    cin>>b;

    char oprtr;
    cout<<"Enter operator(+,*,-,/,%): ";
    cin>>oprtr;

    switch(oprtr) {
        case '+': {
           int sum=a+b;
           cout<<sum;
           break;
        }

        case '-': {
           int diff=a-b;
           cout<<diff;
           break;
        }

        case '*': {
           int prod=a*b;
           cout<<prod;
           break;
        }

        case '/': {
            int quo=a/b;
            cout<<quo;
            break;
        }

        case '%': {
            int rem=a%b;
            cout<<rem;
            break;
        }

        default : cout<<"Invalid operator";
        break;
    }
    return 0;
}