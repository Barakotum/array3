#include <iostream>
#include <vector>

#include "tk1.h"
#include "tk2.h"
#include "tk3.h"
#include "tk4.h"
#include "tk5.h"

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
    vector<int> data;
    vector<double> result;

    if (!input_from_console(data))
    {
        cout << "Error of input integer data!" << endl;
        return 1;
    }

    cout << "Input data:" << endl;
    print(data);

    int minValue = 0;
    int maxValue = 0;

    get_min_max(data, &minValue, &maxValue);

    cout << "Min = " << minValue << ", Max = " << maxValue << endl;

    cout << "Output data (div avg):" << endl;
    get_div_avg(data, result);
    print(result);

    cout << "Output data (mult avg):" << endl;
    get_mult_avg(data, result);
    print(result);

    cout << "Output data (sqrt):" << endl;
    get_sqrt(data, result);
    print(result);

    return 0;
}