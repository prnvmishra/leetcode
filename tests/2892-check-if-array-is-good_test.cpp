#include "lc_test.h"
#include "../2892-check-if-array-is-good/check-if-array-is-good.cpp"

TEST_MAIN {
    vector<int> a{2, 1, 3};
    CHECK_EQ(Solution().isGood(a), false);

    vector<int> b{1, 3, 3, 2};
    CHECK_EQ(Solution().isGood(b), true);

    vector<int> c{1, 1};
    CHECK_EQ(Solution().isGood(c), true);

    vector<int> d{3, 4, 4, 1, 2, 1};
    CHECK_EQ(Solution().isGood(d), false);
}
