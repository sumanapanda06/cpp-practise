#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    
    int sum=0;
    int i;
    for (i=1; i<=n; i++) {
        sum+=i;
    }
    cout<<sum;
    return 0;
}