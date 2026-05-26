#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    if(n<=0) {
        cout<<"No";
        return 0;
    }
    while(n%2==0) {
        n=n/2;
    }
    if(n==1) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}