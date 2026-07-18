#include "lc_test.h"
#include "../1833-find-the-highest-altitude/find-the-highest-altitude.cpp"

TEST_MAIN {
    vector<int> a{-5, 1, 5, 0, -7};
    CHECK_EQ(Solution().largestAltitude(a), 1);

    vector<int> b{-4, -3, -2, -1, 4, 3, 2};
    CHECK_EQ(Solution().largestAltitude(b), 0);

    vector<int> c{1, 2, 3};
    CHECK_EQ(Solution().largestAltitude(c), 6);
}
