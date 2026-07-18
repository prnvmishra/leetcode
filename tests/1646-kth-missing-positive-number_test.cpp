#include "lc_test.h"
#include "../1646-kth-missing-positive-number/kth-missing-positive-number.cpp"

TEST_MAIN {
    vector<int> a{2, 3, 4, 7, 11};
    CHECK_EQ(Solution().findKthPositive(a, 5), 9);

    vector<int> b{1, 2, 3, 4};
    CHECK_EQ(Solution().findKthPositive(b, 2), 6);

    vector<int> c{5, 6, 7};
    CHECK_EQ(Solution().findKthPositive(c, 1), 1);

    vector<int> d{2};
    CHECK_EQ(Solution().findKthPositive(d, 1), 1);
}
