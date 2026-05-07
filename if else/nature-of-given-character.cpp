#include <iostream>
using namespace std;
int main () {
    char alph;
    cout<<"Enter value of alph: ";
    cin>>alph;

    if (alph>='a' && alph<='z') {
        cout<<"Lowercase";
    }
    else if (alph>='A' && alph<='Z') {
        cout<<"Uppercase";
    }
    else if (alph>='0' && alph<='9') {
        cout<<"Numeric";
    }
    else {
        cout<<"Special character";
    }
    return 0;
}