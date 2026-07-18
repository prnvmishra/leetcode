#include "lc_test.h"
#include "../1548-check-if-all-1s-are-at-least-length-k-places-away/check-if-all-1s-are-at-least-length-k-places-away.cpp"

TEST_MAIN {
    vector<int> a{1, 0, 0, 0, 1, 0, 0, 1};
    CHECK_EQ(Solution().kLengthApart(a, 2), true);

    vector<int> b{1, 0, 0, 1, 0, 1};
    CHECK_EQ(Solution().kLengthApart(b, 2), false);

    vector<int> c{0, 0, 0};
    CHECK_EQ(Solution().kLengthApart(c, 5), true);

    vector<int> d{1, 1, 1, 1, 1};
    CHECK_EQ(Solution().kLengthApart(d, 0), true);
}
