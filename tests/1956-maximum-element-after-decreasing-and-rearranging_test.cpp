#include "lc_test.h"
#include "../1956-maximum-element-after-decreasing-and-rearranging/maximum-element-after-decreasing-and-rearranging.cpp"

TEST_MAIN {
    vector<int> a{2, 2, 1, 2, 1};
    CHECK_EQ(Solution().maximumElementAfterDecrementingAndRearranging(a), 2);

    vector<int> b{100, 1, 1000};
    CHECK_EQ(Solution().maximumElementAfterDecrementingAndRearranging(b), 3);

    vector<int> c{1, 2, 3, 4, 5};
    CHECK_EQ(Solution().maximumElementAfterDecrementingAndRearranging(c), 5);

    vector<int> d{1};
    CHECK_EQ(Solution().maximumElementAfterDecrementingAndRearranging(d), 1);
}
