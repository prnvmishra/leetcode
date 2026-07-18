#include "lc_test.h"
#include "../18-4sum/4sum.cpp"

static vector<vector<int>> sorted2d(vector<vector<int>> v) {
    for (auto &row : v) sort(row.begin(), row.end());
    sort(v.begin(), v.end());
    return v;
}

TEST_MAIN {
    vector<int> a{1, 0, -1, 0, -2, 2};
    CHECK_EQ(sorted2d(Solution().fourSum(a, 0)),
             sorted2d({{-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}}));

    vector<int> b{2, 2, 2, 2, 2};
    CHECK_EQ(sorted2d(Solution().fourSum(b, 8)), sorted2d({{2, 2, 2, 2}}));

    vector<int> c{1, 2, 3, 4};
    CHECK_EQ(Solution().fourSum(c, 100).size(), (size_t)0);
}
