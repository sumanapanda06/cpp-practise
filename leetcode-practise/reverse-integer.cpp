#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    while(n!=0) {
        int digit=n%10;
        cout<<digit;
        n=n/10;
    }
    return 0;
}