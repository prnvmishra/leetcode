#include "lc_test.h"
#include "../2753-minimum-number-of-operations-to-make-all-array-elements-equal-to-1/minimum-number-of-operations-to-make-all-array-elements-equal-to-1.cpp"

TEST_MAIN {
    vector<int> a{2, 6, 3, 4};
    CHECK_EQ(Solution().minOperations(a), 4);

    vector<int> b{2, 10, 6, 14};
    CHECK_EQ(Solution().minOperations(b), -1);

    vector<int> c{1, 1, 1};
    CHECK_EQ(Solution().minOperations(c), 0);

    vector<int> d{3, 1, 2};
    CHECK_EQ(Solution().minOperations(d), 2);
}
