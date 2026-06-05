#include<iostream>
#include<string>
using namespace std;
int main() {
    string str;
    cin>>str;
    string vowels="aeiouAEIOU";
    int count_vowels=0;
    int count_cons=0;

    for(int i=0; i<str.length(); i++) {
        bool isVowel=false;
        for(int j=0; j<vowels.length(); j++) {
            if(str[i]==vowels[j]) {
                isVowel=true;
                count_vowels++;
                break;
            }
        }
        if(!isVowel) {
            if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z') {
                count_cons++;
            }
        }
    }
    cout<<"Number of vowels: "<<count_vowels<<endl;
    cout<<"Number of consonants: "<<count_cons<<endl;
    return 0;
}