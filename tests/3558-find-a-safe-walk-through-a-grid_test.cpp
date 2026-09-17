#include "lc_test.h"
#include "../3558-find-a-safe-walk-through-a-grid/find-a-safe-walk-through-a-grid.cpp"

TEST_MAIN {
    vector<vector<int>> a{{0, 1, 0, 0, 0}, {0, 1, 0, 1, 0}, {0, 0, 0, 1, 0}};
    CHECK_EQ(Solution().findSafeWalk(a, 1), true);

    vector<vector<int>> b{{0, 1, 1, 0, 0, 0}, {1, 0, 1, 0, 0, 0},
                          {0, 1, 1, 1, 0, 1}, {0, 0, 1, 0, 1, 0}};
    CHECK_EQ(Solution().findSafeWalk(b, 3), false);

    vector<vector<int>> c{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    CHECK_EQ(Solution().findSafeWalk(c, 5), true);
}
