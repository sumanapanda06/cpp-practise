#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    bool isPrime=1;

    int i;
    for(i=1; i<=(n-1); i++) {
        if(n%i==0) {
            isPrime=0;
        }
    }
    if (isPrime==0) {
        cout<<"Not prime";
    }
    else {
        cout<<"prime";
    }
    return 0;
}