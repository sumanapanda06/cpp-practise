#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int row=1;
    char alph='A';
    while(row<=n) {
        int column=1;
        while(column<=n) {
            char count=alph+row+column-2;
            cout<<count;
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}