#include "lc_test.h"
#include "../1222-remove-covered-intervals/remove-covered-intervals.cpp"

TEST_MAIN {
    vector<vector<int>> a{{1, 4}, {3, 6}, {2, 8}};
    CHECK_EQ(Solution().removeCoveredIntervals(a), 2);

    vector<vector<int>> b{{1, 4}, {2, 3}};
    CHECK_EQ(Solution().removeCoveredIntervals(b), 1);

    vector<vector<int>> c{{0, 10}, {5, 12}};
    CHECK_EQ(Solution().removeCoveredIntervals(c), 2);

    vector<vector<int>> d{{3, 10}, {4, 10}, {5, 11}};
    CHECK_EQ(Solution().removeCoveredIntervals(d), 2);
}
