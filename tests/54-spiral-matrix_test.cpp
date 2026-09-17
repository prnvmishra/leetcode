#include "lc_test.h"
#include "../54-spiral-matrix/spiral-matrix.cpp"

TEST_MAIN {
    vector<vector<int>> a{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    CHECK_EQ(Solution().spiralOrder(a),
             (vector<int>{1, 2, 3, 6, 9, 8, 7, 4, 5}));

    vector<vector<int>> b{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    CHECK_EQ(Solution().spiralOrder(b),
             (vector<int>{1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7}));

    vector<vector<int>> c{{7}};
    CHECK_EQ(Solution().spiralOrder(c), (vector<int>{7}));

    vector<vector<int>> d{{1}, {2}, {3}};
    CHECK_EQ(Solution().spiralOrder(d), (vector<int>{1, 2, 3}));
}
