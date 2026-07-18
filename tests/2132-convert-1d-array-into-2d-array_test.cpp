#include "lc_test.h"
#include "../2132-convert-1d-array-into-2d-array/convert-1d-array-into-2d-array.cpp"

TEST_MAIN {
    vector<int> a{1, 2, 3, 4};
    CHECK_EQ(Solution().construct2DArray(a, 2, 2),
             (vector<vector<int>>{{1, 2}, {3, 4}}));

    vector<int> b{1, 2, 3};
    CHECK_EQ(Solution().construct2DArray(b, 1, 3),
             (vector<vector<int>>{{1, 2, 3}}));

    vector<int> c{1, 2};
    CHECK_EQ(Solution().construct2DArray(c, 1, 1), (vector<vector<int>>{}));
}
