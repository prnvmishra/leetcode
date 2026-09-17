#include "lc_test.h"
#include "../1849-maximum-absolute-sum-of-any-subarray/maximum-absolute-sum-of-any-subarray.cpp"

TEST_MAIN {
    vector<int> a{1, -3, 2, 3, -4};
    CHECK_EQ(Solution().maxAbsoluteSum(a), 5);

    vector<int> b{2, -5, 1, -4, 3, -2};
    CHECK_EQ(Solution().maxAbsoluteSum(b), 8);

    vector<int> c{-1, -2, -3};
    CHECK_EQ(Solution().maxAbsoluteSum(c), 6);

    vector<int> d{4};
    CHECK_EQ(Solution().maxAbsoluteSum(d), 4);
}
