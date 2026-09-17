#include "lc_test.h"
#include "../1677-matrix-diagonal-sum/matrix-diagonal-sum.cpp"

TEST_MAIN {
    vector<vector<int>> a{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    CHECK_EQ(Solution().diagonalSum(a), 25);

    vector<vector<int>> b{{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1},
                          {1, 1, 1, 1}};
    CHECK_EQ(Solution().diagonalSum(b), 8);

    vector<vector<int>> c{{5}};
    CHECK_EQ(Solution().diagonalSum(c), 5);
}
