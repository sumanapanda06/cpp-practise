#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    if(n==0) {
        cout<<"1";
        return 0;
    }
    int mask=0;
    int temp=n;
    while(temp!=0) {
        mask=(mask<<1)|1;
        temp=temp>>1;
    }
    int ans=n^mask;
    cout<<ans;
    return 0;
}