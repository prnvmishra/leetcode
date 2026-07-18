#include "lc_test.h"
#include "../15-3sum/3sum.cpp"

static vector<vector<int>> sorted2d(vector<vector<int>> v) {
    for (auto &row : v) sort(row.begin(), row.end());
    sort(v.begin(), v.end());
    return v;
}

TEST_MAIN {
    vector<int> a{-1, 0, 1, 2, -1, -4};
    CHECK_EQ(sorted2d(Solution().threeSum(a)),
             sorted2d({{-1, -1, 2}, {-1, 0, 1}}));

    vector<int> b{0, 1, 1};
    CHECK_EQ(Solution().threeSum(b).size(), (size_t)0);

    vector<int> c{0, 0, 0};
    CHECK_EQ(sorted2d(Solution().threeSum(c)), sorted2d({{0, 0, 0}}));

    vector<int> d{-2, 0, 1, 1, 2};
    CHECK_EQ(sorted2d(Solution().threeSum(d)),
             sorted2d({{-2, 0, 2}, {-2, 1, 1}}));
}
