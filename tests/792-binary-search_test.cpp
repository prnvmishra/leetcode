#include "lc_test.h"
#include "../792-binary-search/binary-search.cpp"

TEST_MAIN {
    vector<int> a{-1, 0, 3, 5, 9, 12};
    CHECK_EQ(Solution().search(a, 9), 4);
    CHECK_EQ(Solution().search(a, 2), -1);
    CHECK_EQ(Solution().search(a, -1), 0);
    CHECK_EQ(Solution().search(a, 12), 5);

    vector<int> b{5};
    CHECK_EQ(Solution().search(b, 5), 0);
    CHECK_EQ(Solution().search(b, -1), -1);
}
