#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    
    if(n==0) {
        cout<<"0";
        return 0;
    }
    int ans=0;
    int place =1;
    while(n!=0) {
        int digit=n%10;
        if(digit!=0 && digit!=1) {
            cout<<"invalid input";
            return 0;
        }
        ans=ans+(digit*place);
        place=place*2;
        n=n/10;
    }
    cout<<ans;
    return 0;
}