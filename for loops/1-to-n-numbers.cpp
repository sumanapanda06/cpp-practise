#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i=1; i<=n; i++) {
          cout<<i<<endl;;
}
    return 0;
}

//another method

#include <iostream> 
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int i=1;
    for(; ;) {
        if(i<=n) {
            cout<<i;
        }
        else {
            break;
        }
        i++;
    }
    return 0;
}