//void and int type function//

#include<iostream>
using namespace std;
int evenodd1() {              //int type function//
    int a;
    cin>>a;

    if(a%2==0) {
        return 0;
    }
    else {
        return 1;
    }
}                            //returns int type//
void evenodd2() {            //void type function//
    int a;
    cin>>a;

    if(a%2==0) {
        cout<<"Even";
    }
    else {
        cout<<"odd";
    }
}

int main() {
    if(evenodd1()) {         //calling int type fucnction//
        cout<<"odd";
    }
    else {
        cout<<"even";
    }

    evenodd2();              //calling void type function//
    return 0;
}
