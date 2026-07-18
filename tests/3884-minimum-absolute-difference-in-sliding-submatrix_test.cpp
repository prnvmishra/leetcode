#include "lc_test.h"
#include "../3884-minimum-absolute-difference-in-sliding-submatrix/minimum-absolute-difference-in-sliding-submatrix.cpp"

TEST_MAIN {
    vector<vector<int>> a{{1, 8}, {3, -2}};
    CHECK_EQ(Solution().minAbsDiff(a, 2), (vector<vector<int>>{{2}}));

    vector<vector<int>> b{{1, 2}, {3, 4}};
    CHECK_EQ(Solution().minAbsDiff(b, 1),
             (vector<vector<int>>{{0, 0}, {0, 0}}));

    vector<vector<int>> c{{5, 5}, {5, 5}};
    CHECK_EQ(Solution().minAbsDiff(c, 2), (vector<vector<int>>{{0}}));
}
