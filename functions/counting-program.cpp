#include<iostream>
using namespace std;

void counting1() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i=0; i<=n; i++) {
        cout<<i<<endl;
    }
}
int main() {
    counting1();
    return 0;
}