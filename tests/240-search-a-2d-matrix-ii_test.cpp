#include "lc_test.h"
#include "../240-search-a-2d-matrix-ii/search-a-2d-matrix-ii.cpp"

TEST_MAIN {
    vector<vector<int>> m{{1, 4, 7, 11, 15},
                          {2, 5, 8, 12, 19},
                          {3, 6, 9, 16, 22},
                          {10, 13, 14, 17, 24},
                          {18, 21, 23, 26, 30}};
    CHECK_EQ(Solution().searchMatrix(m, 5), true);
    CHECK_EQ(Solution().searchMatrix(m, 20), false);
    CHECK_EQ(Solution().searchMatrix(m, 30), true);
    CHECK_EQ(Solution().searchMatrix(m, 1), true);

    vector<vector<int>> one{{5}};
    CHECK_EQ(Solution().searchMatrix(one, 5), true);
    CHECK_EQ(Solution().searchMatrix(one, 2), false);
}
