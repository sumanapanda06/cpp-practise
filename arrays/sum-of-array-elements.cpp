#include<iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum=0;
    for(int i=0; i<size; i++) {
        sum+=arr[i];
    }
    return sum;
}
int main() {
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int array[100];
    for(int i=0; i<size; i++) {
        cin>>array[i];
    }

    int res=sumArray(array,size);
    cout<<"Sum = "<<res;
}