#include<iostream>
using namespace std;
int main() {
    int side1;
    int side2;
    int side3;

    cout<<"Enter first side: ";
    cin>>side1;
    cout<<"Enter second side: ";
    cin>>side2;
    cout<<"Enter third side: ";
    cin>>side3;

    if((side1+side2)>side3) {
        if((side2+side3)>side1) {
            if((side1+side3)>side2) {
                cout<<"Triangle exists";
            }
            else {
                cout<<"Triangle does not exist";
            }
        }
        else {
            cout<<"Triangle does not exist";
        }
    }
    else {
        cout<<"triangle does not exist";
    }
    return 0;
}