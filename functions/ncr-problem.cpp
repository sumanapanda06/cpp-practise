#include<iostream>
using namespace std;

int nCr1() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int r;
    cout<<"Enter value of r: ";
    cin>>r;

    int n_fact=1;
    for(int i=1; i<=n; i++) {
        n_fact*=i;
    }

    int r_fact=1;
    for(int j=1; j<=r; j++) {
        r_fact*=j;
    }

    int abs=(n-r);
    int abs_fact=1;
    for(int k=1; k<=abs; k++) {
        abs_fact*=k;
    }

    int answer=n_fact/(r_fact*abs_fact);
    return answer;
}

void nCr2() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int r;
    cout<<"Enter value of r: ";
    cin>>r;

    int n_fact=1;
    for(int i=1; i<=n; i++) {
        n_fact*=i;
    }

    int r_fact=1;
    for(int j=1; j<=r; j++) {
        r_fact*=j;
    }

    int abs=n-r;
    int abs_fact=1;
    for (int k=1; k<=abs; k++) {
        abs_fact*=k;
    }

    int answer=n_fact/(r_fact*abs_fact);
    cout<<answer;
}
int main() {

    int final_answer=nCr1();
    cout<<final_answer<<endl;;

    nCr2();
    return 0;
}