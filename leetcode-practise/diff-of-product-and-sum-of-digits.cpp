include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int sum=0;
    int prod=1;

    while(n!=0) {
        int rem=n%10;
        sum+=rem;
        prod*=rem;

        n=n/10;
    }
    cout<<"Answer: "<<prod-sum;
    return 0;
}
