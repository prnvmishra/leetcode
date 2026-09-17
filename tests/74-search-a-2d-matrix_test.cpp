#include "lc_test.h"
#include "../74-search-a-2d-matrix/search-a-2d-matrix.cpp"

TEST_MAIN {
    vector<vector<int>> m{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    CHECK_EQ(Solution().searchMatrix(m, 3), true);
    CHECK_EQ(Solution().searchMatrix(m, 13), false);
    CHECK_EQ(Solution().searchMatrix(m, 60), true);
    CHECK_EQ(Solution().searchMatrix(m, 1), true);

    vector<vector<int>> one{{1}};
    CHECK_EQ(Solution().searchMatrix(one, 1), true);
    CHECK_EQ(Solution().searchMatrix(one, 0), false);
}
