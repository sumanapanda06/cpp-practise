#include <iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;

    if (marks>=90) {
        cout<<"O";
    }
    else if (marks>=80 && marks<=89) {
        cout<<"A";
    }
    else if (marks>=70 && marks<=79) {
        cout<<"B";
    }
    else if(marks>=60 && marks<=69){
        cout<<"C";
    }
    else if(marks>=50 && marks<=59) {
        cout<<"D";
    }
    else if(marks>=40 && marks<=49) {
        cout<<"E";
    }
    else if(marks<40) {
        cout<<"F";
    }
    return 0;
}
