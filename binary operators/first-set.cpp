#include<iostream>
using namespace std;
int main() {
    int a=5;
    int b=6;

    int ans1=(a&b);
    int ans2=(a|b);
    int ans3=(~a);
    int ans4=(~b);
    int ans5=(a^b);

    cout<<ans1<<endl<<ans2<<endl<<ans3<<endl<<ans4<<endl<<ans5<<endl;
    return 0;
}
