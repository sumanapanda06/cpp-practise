//doing int and void type together in one program//

#include<iostream>
using namespace std;
int power() {               //int type function//
    int a,b;
    cin>>a;
    cin>>b;

    int ans=1;

    for(int i=1; i<=b; i++) {
        ans=ans*a;
    }
    return ans;            //returns int type
}
void power1() {            //void type function
    int a,b;
    cin>>a;
    cin>>b;

    int ans=1;
    for(int i=1; i<=b; i++) {
        ans=ans*a;
    }
    cout<<ans;
}
int main() {
    int answer=power();  //calling int type function//
    cout<<answer;

    power1(); //calling void type function//
    return 0;
}