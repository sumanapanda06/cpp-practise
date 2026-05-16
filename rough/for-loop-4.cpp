#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int isPrime=1;
    int i;
    for(i=2;i<=(n-1);i++) {
        if(n%i==0) {
            isPrime=0;
            break;
        }
    }
    if (isPrime==0) {
        cout<<"Not prime";
    }
    else {
        cout<<"Prime";
    }
    return 0;
}