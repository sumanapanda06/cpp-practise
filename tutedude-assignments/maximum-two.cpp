#include<iostream>
using namespace std;
int max_two(int a, int b) {
    if(a>b) {
        return a;
    }
    else if(b>a) {
        return b;
    }
}

int main() {
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a;
    cin>>b;

    if(a==b) {
        cout<<"Both are equal";
    }
    else {
        int maximum=max_two(a,b);
        cout<<maximum;
    }
    return 0;

}