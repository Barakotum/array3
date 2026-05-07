#include "tk4.h"

vector<double>& get_mult_avg(const vector<int>& src, vector<double>& dst)
{
    dst.clear();

    if (src.empty())
    {
        return dst;
    }

    double sum = 0;

    for (int value : src)
    {
        sum += value;
    }

    double avg = sum / src.size();

    for (int value : src)
    {
        dst.push_back(value * avg);
    }

    return dst;
}