#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    bool isprime=1;
    if(n<=1) {
        cout<<"not prime";
        return 0;
    }

    for(int i=2; i<=(n-1); i++) {
        if(n%i==0) {
            isprime=0;
            break;
        }
    }
    if(isprime==0) {
        cout<<"not prime";
    }
    else {
        cout<<"prime";
    }
    return 0;
}