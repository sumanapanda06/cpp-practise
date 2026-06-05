#include<iostream>
using namespace std;
bool vote_eligibility(int age) {
    bool isEligible=false;
    if(age>=18) {
        isEligible=true;
    }
    return isEligible;
}
int main() {
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(vote_eligibility(age)) {
        cout<<"The person is eligible.";
    }
    else {
        cout<<"The person is not eligible.";
    }
    return 0;
}
    