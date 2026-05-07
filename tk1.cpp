#include <iostream>
#include "tk1.h"

using namespace std;

bool input_from_console(vector<int>& data)
{
    int count;
    int value;

    cout << "Enter count of data: ";
    cin >> count;

    if (cin.fail() || count <= 0)
    {
        return false;
    }

    for (int i = 0; i < count; i++)
    {
        cin >> value;

        if (cin.fail())
        {
            return false;
        }

        data.push_back(value);
    }

    return true;
}