#include<iostream>
using namespace std;
void fibonnacci_series1() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int a=0;
    int b=1;
    cout<<"Fibonnacci series: "<<a<<" "<<b<<" ";
    int c;
    for(int i=3; i<=n; i++) {
        c=a+b; 
        cout<<c<<" ";
        a=b;
        b=c;
    }
    cout<<"\nnth term: "<<b;
}

int fibonnacci_series2() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int a=0;
    int b=1;
    int c;
    for(int i=3; i<=n; i++) {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main() {
    
}