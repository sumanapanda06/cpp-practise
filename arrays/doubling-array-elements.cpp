#include<iostream>
using namespace std;


void doubleElements(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]*2<<" ";
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
    doubleElements(arr, size);
    return 0;

}