#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int i=1;
    int res=1;
    while(i<=n) {
        res*=2;
        cout<<"2 to the power "<<i<<"="<<res<<endl;
        i++;
    }
}