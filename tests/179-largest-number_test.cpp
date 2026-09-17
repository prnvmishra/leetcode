#include "lc_test.h"
#include "../179-largest-number/largest-number.cpp"

TEST_MAIN {
    vector<int> a{10, 2};
    CHECK_EQ(Solution().largestNumber(a), string("210"));

    vector<int> b{3, 30, 34, 5, 9};
    CHECK_EQ(Solution().largestNumber(b), string("9534330"));

    vector<int> c{0, 0};
    CHECK_EQ(Solution().largestNumber(c), string("0"));

    vector<int> d{1};
    CHECK_EQ(Solution().largestNumber(d), string("1"));
}
