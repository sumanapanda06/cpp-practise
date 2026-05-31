#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int avg=0;
    for(int i=0; i<=n; i++) {
        avg+=i;
    }
    float res=(float)avg/n;
    cout<<res;
}