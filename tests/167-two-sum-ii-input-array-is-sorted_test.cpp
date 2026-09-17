#include "lc_test.h"
#include "../167-two-sum-ii-input-array-is-sorted/two-sum-ii-input-array-is-sorted.cpp"

TEST_MAIN {
    vector<int> a{2, 7, 11, 15};
    CHECK_EQ(Solution().twoSum(a, 9), (vector<int>{1, 2}));

    vector<int> b{2, 3, 4};
    CHECK_EQ(Solution().twoSum(b, 6), (vector<int>{1, 3}));

    vector<int> c{-1, 0};
    CHECK_EQ(Solution().twoSum(c, -1), (vector<int>{1, 2}));

    vector<int> d{1, 2, 3, 4, 4, 9, 56, 90};
    CHECK_EQ(Solution().twoSum(d, 8), (vector<int>{4, 5}));
}
