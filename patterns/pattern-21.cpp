#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int row=1;
    while(row<=n) {
        int space=row-1;
        while(space) {
            cout<<" ";
            space=space-1;
        }
        int column=1;
        while(column<=n-row+1) {
            cout<<"*";
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}