#include "lc_test.h"
#include "../42-trapping-rain-water/trapping-rain-water.cpp"

TEST_MAIN {
    vector<int> a{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    CHECK_EQ(Solution().trap(a), 6);

    vector<int> b{4, 2, 0, 3, 2, 5};
    CHECK_EQ(Solution().trap(b), 9);

    vector<int> c{1, 2, 3};
    CHECK_EQ(Solution().trap(c), 0);

    vector<int> d{5};
    CHECK_EQ(Solution().trap(d), 0);
}
