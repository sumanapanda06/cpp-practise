#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int a=0;
    int b=1;
    int i;
    cout<<a<<" "<<b<<" ";
    for(i=0;i<=n;i++) {
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}