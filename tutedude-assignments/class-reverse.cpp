#include <iostream>
using namespace std;
class reverse {
    private:
    int num;

    public:

    void input() {
        cout<<"Enter a number: ";
        cin>>num;
    }
    void display() {
        int reverse_num=0;
        while(num!=0) {
            int digit=num%10;
            reverse_num=reverse_num*10+digit;
            num=num/10;
        }
        cout<<"Reverse of the number is: "<<reverse_num<<endl;
    }
};
int main() {
    reverse r;
    r.input();
    r.display();
    return 0;
}