#include "lc_test.h"
#include "../73-set-matrix-zeroes/set-matrix-zeroes.cpp"

TEST_MAIN {
    vector<vector<int>> a{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    Solution().setZeroes(a);
    CHECK_EQ(a, (vector<vector<int>>{{1, 0, 1}, {0, 0, 0}, {1, 0, 1}}));

    vector<vector<int>> b{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    Solution().setZeroes(b);
    CHECK_EQ(b,
             (vector<vector<int>>{{0, 0, 0, 0}, {0, 4, 5, 0}, {0, 3, 1, 0}}));

    vector<vector<int>> c{{1, 2}, {3, 4}};
    Solution().setZeroes(c);
    CHECK_EQ(c, (vector<vector<int>>{{1, 2}, {3, 4}}));
}
