#include<iostream>
#include<string>
using namespace std;

int main() {
    string my_str;
    cout<<"Enter the string: ";
    cin>>my_str;

    char key;
    cout<<"Enter character to be checked: ";
    cin>>key;
    bool isPresent=false;
    string index;

    for(int i=0; i<my_str.length(); i++) {
        if(my_str[i]==key) {
            isPresent=true;
            index+=to_string(i)+" ";
        }
    }
    if(isPresent) {
        cout<<"key element is present"<<endl;
        cout<<"position: "<<index;
    }
    else {
        cout<<"key element not present";
    }
    return 0;
}