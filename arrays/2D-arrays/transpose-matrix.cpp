#include<iostream>
using namespace std;

int main() {
    int row;
    cout<<"Enter row: ";
    cin>>row;

    int column;
    cout<<"Enter column: ";
    cin>>column;

    int arr[100][100];
    for(int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<column; i++) {
        for(int j=0; j<row; j++) {
            cout<<arr[j][i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}