#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int i;
    int sum=0;
    for(i=0;i<=n;i++) {
        sum+=i;
    }
    cout<<sum;
    return 0;
}