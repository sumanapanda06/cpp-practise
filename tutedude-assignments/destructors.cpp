#include<iostream>
using namespace std;
class student {
    public:
    int age;

    student() {
        age=18;
    }
    ~student() {
        cout<<"Object is deleted"<<endl;
    }
};
int main() {
    student s;
    cout<<"age: "<<s.age<<endl;
    return 0;
}