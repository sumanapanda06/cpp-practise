#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name, className;
    int age;

    cout << "Enter student's name: ";
    cin >> name;

    cout << "Enter student's class: ";
    cin >> className;

    cout << "Enter student's age: ";
    cin >> age;

    ofstream file("student_info.txt");

    file << name << ", " << className << ", " << age;

    file.close();

    cout << "Student details saved to student_info.txt" << endl;

    return 0;
}