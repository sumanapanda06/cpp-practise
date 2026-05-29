#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    
    if(n==1) {
        return 0;
    }

    int start=2;
    while(start<=n) {
        if(start%2==0) {
            cout<<start<<" ";
        }
        start=start+2;
    }
    return 0;
}