#include "tk2.h"

void get_min_max(const vector<int>& data, int *min, int *max)
{
    if (data.empty())
    {
        return;
    }

    *min = data[0];
    *max = data[0];

    for (int value : data)
    {
        if (value < *min)
        {
            *min = value;
        }

        if (value > *max)
        {
            *max = value;
        }
    }
}