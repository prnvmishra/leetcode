#include "lc_test.h"
#include "../1878-check-if-array-is-sorted-and-rotated/check-if-array-is-sorted-and-rotated.cpp"

TEST_MAIN {
    vector<int> a{3, 4, 5, 1, 2};
    CHECK_EQ(Solution().check(a), true);

    vector<int> b{2, 1, 3, 4};
    CHECK_EQ(Solution().check(b), false);

    vector<int> c{1, 2, 3};
    CHECK_EQ(Solution().check(c), true);

    vector<int> d{1, 1, 1};
    CHECK_EQ(Solution().check(d), true);
}
