#include<iostream>
using namespace std;
int main() {
    //accessing an array
    int array1[3];

    //2ND INDEX
    cout<<"Value for 2nd index: "<<array1[2]<<endl;   
    
    //2ND POSITION
    cout<<"Value for 2nd postion: "<<array1[1]<<endl;    

    int array2[3]={2,3,4};

    //2ND INDEX
    cout<<"Value of 2nd index: "<<array2[2]<<endl;    
    
    //2ND POSITION
    cout<<"Value of 2nd position: "<<array2[1]<<endl;   

    //printing an array
    for(int i=0; i<3; i++) {
        cout<<array2[i]<<" ";                          
    }
    cout<<endl;

    //printing an array with initialising as 0
    int array4[10] = {0};
    for(int j=0; j<10; j++) {
        cout<<array4[j]<<" ";                        
    }
    cout<<endl;

    //printing an array with initialising as 1
    int array5[7]={1};
    for(int k=0; k<7; k++) {
        cout<<array5[k]<<" ";                       
    }
    cout<<endl;

    //printing all elements of an undefined array as 1
    int array6[7];
    for(int h=0; h<7; h++) {
        array6[h]=1;
        cout<<array6[h]<<" ";
    }
    cout<<endl;
}