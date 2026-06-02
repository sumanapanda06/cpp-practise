#include<iostream>
using namespace std;

void reverse_array(int arr[], int size) {
    for(int i=(size-1); i>=0; i--) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[100];
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    reverse_array(arr,size);
    return 0;
}