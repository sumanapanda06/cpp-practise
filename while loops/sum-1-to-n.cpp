#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int start=1;
    int sum=0;
    while(start<=n) {
        sum=sum+start;
        start=start+1;
    }
    cout<<sum;
    return 0;
}