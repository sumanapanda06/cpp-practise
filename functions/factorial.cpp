#include<iostream>
using namespace std;

int factorial1() {
    int n;
    cin>>n;
    int ans=1;
    if(n==0) {
      ans=0;  
    }

    for(int i=1; i<=n; i++) {
        ans*=i;
    }
    return ans;
}


void factorial2() {
    int n;
    cin>>n;

    int ans=1;
    if(n==0) {
        ans=0;
    }

    for(int i=1; i<=n; i++) {
        ans*=i;
    }
    cout<<ans;
}
int main() {
    int answer=factorial1();
    cout<<answer;

    factorial2();
    return 0;
}