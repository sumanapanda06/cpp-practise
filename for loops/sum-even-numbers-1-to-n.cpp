#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    if(n<=1) {
        cout<<"0";
        return 0;
    }
    int sum=0;
    for(int i=2; i<=n; i+=2) {
        if(i%2==0) {
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}