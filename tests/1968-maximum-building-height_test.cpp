#include "lc_test.h"
#include "../1968-maximum-building-height/maximum-building-height.cpp"

TEST_MAIN {
    vector<vector<int>> a{{5, 3}, {2, 5}, {7, 4}, {10, 3}};
    CHECK_EQ(Solution().maxBuilding(10, a), 5);

    vector<vector<int>> b{{2, 1}, {4, 1}};
    CHECK_EQ(Solution().maxBuilding(6, b), 3);

    vector<vector<int>> c{};
    CHECK_EQ(Solution().maxBuilding(5, c), 4);
}
