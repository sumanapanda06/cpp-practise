#include<iostream>
using namespace std;
void search_array(int arr[], int size, int key) {
    bool notPresent=0;
    for(int i=0; i<size; i++) {
        if(key==arr[i]) {
            notPresent=1;
        }
    }
    if(notPresent==1) {
        cout<<"key element is present";
    }
    else {
        cout<<"key element is not present";
    }
}

int main() {
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int key;
    cout<<"Enter key element to be searched: ";
    cin>>key;

    int arr[100];

    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    search_array(arr,size,key);
    return 0;
}