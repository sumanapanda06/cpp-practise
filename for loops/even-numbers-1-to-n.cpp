#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    if(n<=1) {
        return 0;
    }
    for(int i=2; i<=n; i+=2) {
        if(i%2==0) {
            cout<<i<<" ";
        }
    }
    return 0;
}