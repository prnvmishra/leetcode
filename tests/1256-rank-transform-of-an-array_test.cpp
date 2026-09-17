#include "lc_test.h"
#include "../1256-rank-transform-of-an-array/rank-transform-of-an-array.cpp"

TEST_MAIN {
    vector<int> a{40, 10, 20, 30};
    CHECK_EQ(Solution().arrayRankTransform(a), (vector<int>{4, 1, 2, 3}));

    vector<int> b{100, 100, 100};
    CHECK_EQ(Solution().arrayRankTransform(b), (vector<int>{1, 1, 1}));

    vector<int> c{37, 12, 28, 9, 100, 56, 80, 5, 12};
    CHECK_EQ(Solution().arrayRankTransform(c),
             (vector<int>{5, 3, 4, 2, 8, 6, 7, 1, 3}));

    vector<int> empty{};
    CHECK_EQ(Solution().arrayRankTransform(empty), (vector<int>{}));
}
