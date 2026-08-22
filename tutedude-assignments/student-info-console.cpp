#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("student_info.txt");

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string data;

    cout << "Content from 'student_info.txt':" << endl;

    getline(file, data);
    cout << data << endl;

    file.close();

    return 0;
}