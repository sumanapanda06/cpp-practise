#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int row=1;
    while(row<=n) {
        int column=1;
        while(column<=n-row+1) {
            cout<<column;
            column=column+1;
        }
        int star1=row-1;
        while(star1) {
            cout<<"*";
            star1=star1-1;
        }
        int star2=row-1;
        while(star2) {
            cout<<"*";
            star2=star2-1;
        }
        int column1=n-row+1;
        while(column1>=1) {
            cout<<column1;
            column1=column1-1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}