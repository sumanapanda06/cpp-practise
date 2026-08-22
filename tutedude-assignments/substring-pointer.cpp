#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mainString, subString;

    cout << "Enter main string: ";
    getline(cin, mainString);

    cout << "Enter substring: ";
    getline(cin, subString);

    cout << "Starting positions of substring '" << subString << "':" << endl;

    string *ptr = &mainString;

    for (int i = 0; i <= (int)mainString.length() - (int)subString.length(); i++)
    {
        bool found = true;

        for (int j = 0; j < (int)subString.length(); j++)
        {
            if ((*ptr)[i + j] != subString[j])
            {
                found = false;
                break;
            }
        }

        if (found)
        {
            cout << "Position " << i << endl;
        }
    }

    return 0;
}