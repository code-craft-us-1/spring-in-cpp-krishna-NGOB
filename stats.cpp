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
        float sum = 0.0f;
        float max = std::numeric_limits<float>::lowest();
        float min = std::numeric_limits<float>::max();

        for (const float& num : input) {
            sum += num;
            if (num > max) max = num;
            if (num < min) min = num;
        }

        stats.average = sum / input.size();
        stats.max = max;
        stats.min = min;
    }
    return stats;
}
