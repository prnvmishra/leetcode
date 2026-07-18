#include "lc_test.h"
#include "../152-maximum-product-subarray/maximum-product-subarray.cpp"

TEST_MAIN {
    vector<int> a{2, 3, -2, 4};
    CHECK_EQ(Solution().maxProduct(a), 6);

    vector<int> b{-2, 0, -1};
    CHECK_EQ(Solution().maxProduct(b), 0);

    vector<int> c{-2, 3, -4};
    CHECK_EQ(Solution().maxProduct(c), 24);

    vector<int> d{-3};
    CHECK_EQ(Solution().maxProduct(d), -3);

    vector<int> e{2, -5, -2, -4, 3};
    CHECK_EQ(Solution().maxProduct(e), 24);
}
