#include<iostream>
using namespace std;
class fact {
    private:
    int num;

    public:
    void input() {
        cout<<"Enter the number: ";
        cin>>num;
    }

    void factorial() {
        int facto=1;
        while(num>0) {
            facto=facto*num;
            num=num-1;
        }
        cout<<"factorial: "<<facto<<endl;
    }
};

int main() {
    fact n;
    n.input();
    n.factorial();

    return 0;
}