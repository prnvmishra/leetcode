#include "lc_test.h"
#include "../35-search-insert-position/search-insert-position.cpp"

TEST_MAIN {
    vector<int> a{1, 3, 5, 6};
    CHECK_EQ(Solution().searchInsert(a, 5), 2);
    CHECK_EQ(Solution().searchInsert(a, 2), 1);
    CHECK_EQ(Solution().searchInsert(a, 7), 4);
    CHECK_EQ(Solution().searchInsert(a, 0), 0);
}
