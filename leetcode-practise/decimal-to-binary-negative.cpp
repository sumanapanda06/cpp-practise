#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i=31;i>=0;i--) {
        int bit=((n>>i)&1);
        cout<<bit;
    }
    return 0;
}