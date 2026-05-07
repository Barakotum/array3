#include <cmath>
#include "tk5.h"

vector<double>& get_sqrt(const vector<int>& src, vector<double>& dst)
{
    dst.clear();

    for (int value : src)
    {
        dst.push_back(sqrt(value));
    }

    return dst;
}