#include<iostream>
using namespace std;

int total_bits1() {
    int a;
    cout<<"Enter value of a: ";
    cin>>a;

    int b;
    cout<<"Enter value of b: ";
    cin>>b;

    int count_a=0;
    int count_b=0;
    while(a!=0) {
        if(a&1) {
            count_a++;
        }
        a=a>>1;
    }
    while(b!=0) {
        if(b&1) {
            count_b++;
        }
        b=b>>1;
    }
    int count_total=count_a+count_b;
    return count_total;
}

void total_bits2() {
    int a;
    cout<<"Enter value of a: ";
    cin>>a;

    int b;
    cout<<"Enter value of b: ";
    cin>>b;

    int count_a=0;
    int count_b=0;
    for(int i=0; i<=31; i++) {
        int bit_a=(a>>i)&1;
        if(bit_a) {
            count_a++;
        }
        int bit_b=(b>>i)&1;
        if(bit_b) {
            count_b++;
        }
    }
    int ans=count_a+count_b;
    cout<<ans;
}
int main() {
    int final_answer=total_bits1();
    cout<<final_answer;

    total_bits2();
    return 0;
}