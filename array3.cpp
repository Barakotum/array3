#include <iostream>
#include <vector>

using namespace std;

template <class T>
void print(const vector<T>& data)
{
    for (const T& value : data)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Array3 project" << endl;
    return 0;
}