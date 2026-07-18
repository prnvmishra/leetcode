#include "lc_test.h"
#include "../219-contains-duplicate-ii/contains-duplicate-ii.cpp"

TEST_MAIN {
    vector<int> a{1, 2, 3, 1};
    CHECK_EQ(Solution().containsNearbyDuplicate(a, 3), true);

    vector<int> b{1, 0, 1, 1};
    CHECK_EQ(Solution().containsNearbyDuplicate(b, 1), true);

    vector<int> c{1, 2, 3, 1, 2, 3};
    CHECK_EQ(Solution().containsNearbyDuplicate(c, 2), false);

    vector<int> d{99, 99};
    CHECK_EQ(Solution().containsNearbyDuplicate(d, 2), true);
}
