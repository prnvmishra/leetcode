#include "lc_test.h"
#include "../4119-minimum-distance-between-three-equal-elements-ii/minimum-distance-between-three-equal-elements-ii.cpp"

TEST_MAIN {
    vector<int> a{1, 2, 1, 1, 3};
    CHECK_EQ(Solution().minimumDistance(a), 6);

    vector<int> b{1, 1, 2, 3, 2, 1, 2};
    CHECK_EQ(Solution().minimumDistance(b), 8);

    vector<int> c{1};
    CHECK_EQ(Solution().minimumDistance(c), -1);

    vector<int> d{5, 5, 5};
    CHECK_EQ(Solution().minimumDistance(d), 4);
}
