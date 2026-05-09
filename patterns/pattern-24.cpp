#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int row=1;
    int count=1;
    while(row<=n) {
        int space=n-row;
        while(space) {
            cout<<" ";
            space=space-1;
        }
        int column=1;
        while(column<=row) {
            cout<<count;
            count=count+1;
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}