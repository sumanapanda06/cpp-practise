#include <iostream>
using namespace std;
int main () {
    int num;
    cout<<"Enter value: ";
    cin>>num;

    if (num>0) {
        cout<<num<<" is positive";
    }
    else if(num<0) {
        cout<<num<<" is negative";
    }
    else {
        cout<<"Equal to 0";
    }
    return 0;
}