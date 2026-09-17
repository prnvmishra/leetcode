#include "lc_test.h"
#include "../121-best-time-to-buy-and-sell-stock/best-time-to-buy-and-sell-stock.cpp"

TEST_MAIN {
    vector<int> a{7, 1, 5, 3, 6, 4};
    CHECK_EQ(Solution().maxProfit(a), 5);

    vector<int> b{7, 6, 4, 3, 1};
    CHECK_EQ(Solution().maxProfit(b), 0);

    vector<int> c{1, 2};
    CHECK_EQ(Solution().maxProfit(c), 1);

    vector<int> one{3};
    CHECK_EQ(Solution().maxProfit(one), 0);
}
