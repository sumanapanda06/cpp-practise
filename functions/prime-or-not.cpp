//int and void type functions//

#include<iostream>
using namespace std;
int primeOrnot1() {          //int type function//
    int n;
    cin>>n;
    bool isPrime=0;
    if(n<=1) {
        return 1;
    }
    for(int i=2; i<=(n-1); i++) {
        if(n%i==0) {
            isPrime=1;
            break;
        }
    }
    if(isPrime==0) {
        return 0;
    }
    else {
        return 1;
    }
}

void primeornot2() {        //void type function
    int a;
    cin>>a;

    bool isPrime=0;

    if(a<=1) {
        cout<<"Not prime";
    }

    for(int i=2;i<=(a-1);i++) {
        if(a%1==0) {
            isPrime=1;
            break;
        }
    }
    if(isPrime==1) {
        cout<<"Not prime";
    }
    else {
        cout<<"prime";
    }
}

int main() {
    if(primeOrnot1()) {       //calling int type function//
        cout<<"Not prime";
    }
    else {
        cout<<"prime";
    }

    primeornot2();         //calling void type function//

    return 0;
}