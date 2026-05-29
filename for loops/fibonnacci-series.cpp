#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    if(n==0) {
        return 0;
    }
    if(n==1) {
        cout<<"0";
        return 0;
    }
    int a=0;
    int b=1;
    cout<<"Fibonnacci series: "<<a<<" "<<b<<" ";

    for(int i=2; i<n; i++) {
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}