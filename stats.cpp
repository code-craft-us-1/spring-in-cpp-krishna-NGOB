#include "stats.h"
#include <numeric>
#include <algorithm>
#include <cmath>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& input) {
    //Implement statistics here
    Stats stats;
    if (input.size()==0)
    {
        stats.average = NAN;
        stats.max = NAN;
        stats.min = NAN;
    }
    else{
        stats.average = ((float)std::accumulate(input.begin(), input.end(), 0.0f)) / input.size();
        stats.max = *std::max_element(input.begin(), input.end());
        stats.min = *std::min_element(input.begin(), input.end());
    }
    return stats;
}
