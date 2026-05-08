#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int start=2;
    while(start<n) {
        if(n%start==0) {
            cout<<"not prime"<<endl;;
        }
        else {
            cout<<"prime"<<endl;;
        }
        start=start+1;
    }
    return 0;
}