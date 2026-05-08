#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    
    int start=2;
    int sum=0;
    while(start<n) {
        if(start%2==0) {
            sum=sum+start;
        }
        start=start+2;
    }
    cout<<sum;
    return 0;
}