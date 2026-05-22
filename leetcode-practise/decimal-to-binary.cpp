#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    if (n==0) {
        cout<<")";
        return 0;
    }

    int ans=0;
    int power=1;

    while(n>0) {
        int bit=(n&1);
        ans=ans+(bit*power);
        power=power*10;
        n=n>>1;
    }
    cout<<ans;
    return 0;
}