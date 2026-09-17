#include "lc_test.h"
#include "../287-find-the-duplicate-number/find-the-duplicate-number.cpp"

TEST_MAIN {
    vector<int> a{1, 3, 4, 2, 2};
    CHECK_EQ(Solution().findDuplicate(a), 2);

    vector<int> b{3, 1, 3, 4, 2};
    CHECK_EQ(Solution().findDuplicate(b), 3);

    vector<int> c{3, 3, 3, 3, 3};
    CHECK_EQ(Solution().findDuplicate(c), 3);

    vector<int> d{1, 1};
    CHECK_EQ(Solution().findDuplicate(d), 1);
}
