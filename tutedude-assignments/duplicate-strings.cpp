#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    string characters;

    int length_str = str.length();

    for(int i = 0; i < length_str; i++) {
        for(int j = i + 1; j < length_str; j++) {
            if(str[i] == str[j]) {

                bool alreadyPresent = false;

                for(int k = 0; k < characters.length(); k++) {
                    if(characters[k] == str[i]) {
                        alreadyPresent = true;
                        break;
                    }
                }

                if(!alreadyPresent) {
                    characters += str[i];
                }
            }
        }
    }

    cout << characters;

    return 0;
}
