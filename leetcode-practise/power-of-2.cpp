#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    while(n%2==0) {
        n=n/2;
    }
    if(n==1) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}

//another method// 
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    bool ans=false;

    for(int i=0;i<=31;i++) {
        if(n==(1<<i)) {
            ans=true;
            break;
        }
    }
    if(ans) {
        cout<<"yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}