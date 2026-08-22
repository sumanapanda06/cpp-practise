#include<iostream>
using namespace std;

struct student {
    string name;
    int age;
    char grade;
};
int main() {
    student s1;
    student s2;

    s1.name = "Mohit";
    s1.age = 14;
    s1.grade = 'B';

    s2.name = "Riya";
    s2.age = 16;
    s2.grade = 'A';


    cout<<"Student 1:"<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Grade: "<<s1.grade<<endl;

    cout <<endl;

    cout<<"Student 2:"<<endl;
    cout<<"Name: "<<s2.name<<endl;
    cout<<"Age: "<<s2.age<<endl;
    cout<<"Grade: "<<s2.grade<<endl;

    return 0;
}