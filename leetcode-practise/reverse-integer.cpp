#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    if(n==0) {
        cout<<"0";
        return 0;
    }

    while(n!=0) {
        int digit=n%10;
        cout<<digit;
        n=n/10;
    }
    return 0;
}