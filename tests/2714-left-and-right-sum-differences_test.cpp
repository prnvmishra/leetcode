#include "lc_test.h"
#include "../2714-left-and-right-sum-differences/left-and-right-sum-differences.cpp"

TEST_MAIN {
    vector<int> a{10, 4, 8, 3};
    CHECK_EQ(Solution().leftRightDifference(a),
             (vector<int>{15, 1, 11, 22}));

    vector<int> b{1};
    CHECK_EQ(Solution().leftRightDifference(b), (vector<int>{0}));

    vector<int> c{1, 2, 3};
    CHECK_EQ(Solution().leftRightDifference(c), (vector<int>{5, 2, 3}));
}
