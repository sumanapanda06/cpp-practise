#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> linkedList;

    linkedList.push_back(10);
    linkedList.push_back(20);
    linkedList.push_back(30);
    linkedList.push_back(40);
    linkedList.push_back(50);

    cout << "Elements in the linked list:" << endl;

    for (int element : linkedList)
    {
        cout << element << endl;
    }

    return 0;
}