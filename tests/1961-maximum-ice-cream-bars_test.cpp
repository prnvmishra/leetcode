#include "lc_test.h"
#include "../1961-maximum-ice-cream-bars/maximum-ice-cream-bars.cpp"

TEST_MAIN {
    vector<int> a{1, 3, 2, 4, 1};
    CHECK_EQ(Solution().maxIceCream(a, 7), 4);

    vector<int> b{10, 6, 8, 7, 7, 8};
    CHECK_EQ(Solution().maxIceCream(b, 5), 0);

    vector<int> c{1, 6, 3, 1, 2, 5};
    CHECK_EQ(Solution().maxIceCream(c, 20), 6);
}
