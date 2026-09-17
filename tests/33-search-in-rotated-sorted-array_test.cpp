#include "lc_test.h"
#include "../33-search-in-rotated-sorted-array/search-in-rotated-sorted-array.cpp"

TEST_MAIN {
    vector<int> a{4, 5, 6, 7, 0, 1, 2};
    CHECK_EQ(Solution().search(a, 0), 4);
    CHECK_EQ(Solution().search(a, 3), -1);
    CHECK_EQ(Solution().search(a, 4), 0);
    CHECK_EQ(Solution().search(a, 2), 6);

    vector<int> b{1};
    CHECK_EQ(Solution().search(b, 0), -1);
    CHECK_EQ(Solution().search(b, 1), 0);
}
