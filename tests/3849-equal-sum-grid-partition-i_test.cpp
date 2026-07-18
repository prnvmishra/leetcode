#include "lc_test.h"
#include "../3849-equal-sum-grid-partition-i/equal-sum-grid-partition-i.cpp"

TEST_MAIN {
    vector<vector<int>> a{{1, 4}, {2, 3}};
    CHECK_EQ(Solution().canPartitionGrid(a), true);

    vector<vector<int>> b{{1, 3}, {2, 4}};
    CHECK_EQ(Solution().canPartitionGrid(b), false);

    vector<vector<int>> c{{2, 2}};  // vertical cut
    CHECK_EQ(Solution().canPartitionGrid(c), true);

    vector<vector<int>> d{{1, 2, 2}};  // odd total
    CHECK_EQ(Solution().canPartitionGrid(d), false);
}
