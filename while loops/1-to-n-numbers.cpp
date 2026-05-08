#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int start=1;
    while(start<=n) {
        cout<<start;
        start=start+1;
    }
    return 0;
}