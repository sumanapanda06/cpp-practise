#include<iostream>
#include<climits>
using namespace std;

int maxarray(int arr[], int size) {
    int maximum=INT_MIN;
    for(int i=0; i<size; i++) {
        if(arr[i]>maximum) {
            maximum=arr[i];
        }
    }
    return maximum;
}

int minarray(int arr[], int size) {
    int minimum=INT_MAX;
    for(int i=0; i<size; i++) {
        if(arr[i]<minimum) {
            minimum=arr[i];
        }
    }
    return minimum;
}

int main() {

    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[100];
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    int max_array=maxarray(arr,size);
    cout<<"Maximum: "<<max_array<<endl;
    int min_array=minarray(arr,size);
    cout<<"Minimum: "<<min_array<<endl;

    return 0; 
}