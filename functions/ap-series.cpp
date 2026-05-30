#include<iostream>
using namespace std;

int ap1() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int ap=3*n+7;
    return ap;
}

void ap2() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int ap=3*n+7;
    cout<<ap<<;
}
int main() {
    int final_answer=ap1();
    cout<<final_answer<<endl;

    ap2();
}