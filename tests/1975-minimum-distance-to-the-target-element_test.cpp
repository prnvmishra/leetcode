#include "lc_test.h"
#include "../1975-minimum-distance-to-the-target-element/minimum-distance-to-the-target-element.cpp"

TEST_MAIN {
    vector<int> a{1, 2, 3, 4, 5};
    CHECK_EQ(Solution().getMinDistance(a, 5, 3), 1);

    vector<int> b{1};
    CHECK_EQ(Solution().getMinDistance(b, 1, 0), 0);

    vector<int> c{1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CHECK_EQ(Solution().getMinDistance(c, 1, 0), 0);

    vector<int> d{5, 3, 6};
    CHECK_EQ(Solution().getMinDistance(d, 6, 0), 2);
}
