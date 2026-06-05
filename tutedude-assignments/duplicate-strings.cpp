#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int freq[26] = {0};

    // Count frequencies
    for(int i = 0; i < str.length(); i++) {
        freq[str[i] - 'a']++;
    }

    // Print duplicates only once
    for(int i = 0; i < str.length(); i++) {
        if(freq[str[i] - 'a'] > 1) {
            cout << str[i];
            freq[str[i] - 'a'] = 0;
        }
    }

    return 0;
}