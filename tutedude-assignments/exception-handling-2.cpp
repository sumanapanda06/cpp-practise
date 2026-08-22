#include <iostream>
#include <string>
using namespace std;

int main()
{
    try
    {
        string input;
        cout << "Enter an integer: ";
        cin >> input;

        int i = 0;

        if (input[0] == '-' || input[0] == '+')
            i = 1;

        for (; i < input.length(); i++)
        {
            if (!isdigit(input[i]))
            {
                throw 1;
            }
        }

        cout << "Valid integer: " << input << endl;
    }
    catch (int)
    {
        cout << "Invalid integer input!" << endl;
    }

    try
    {
        string input;
        cout << "Enter a character: ";
        cin >> input;

        if (input.length() != 1)
        {
            throw 'c';
        }

        cout << "Valid character: " << input << endl;
    }
    catch (char)
    {
        cout << "Invalid character input!" << endl;
    }

    return 0;
}