#include<iostream>
using namespace std;
void addition(char opr, float a, float b) {
        cout<<a+b;
}
void subtraction(char opr, float a, float b) {
        cout<<a-b;
}
void multiplication(char opr, float a, float b) {
        cout<<a*b;
}
void division(char opr, float a, float b) {
        cout<<float(a/b);
}
void power(char opr, float a, float b) {
        int res=1;
        for(int i=1; i<=b; i++) {
            res*=a;
        }
        cout<<res;
}

int main() {
    float a;
    float b;
    char opr;
    cout<<"Enter first and second numbers: ";
    cin>>a>>b;
    cout<<"Enter operator: ";
    cin>>opr;

    if(opr=='+') {
        addition(opr,a,b);
    }
    else if(opr=='-') {
        subtraction(opr,a,b);
    }
    else if(opr=='*') {
        multiplication(opr,a,b);
    }
    else if(opr=='/') {
        division(opr,a,b);
    }
    else if(opr=='^') {
        power(opr,a,b);
    }
    else {
        cout<<"Invalid operator";
    }
    return 0;
}