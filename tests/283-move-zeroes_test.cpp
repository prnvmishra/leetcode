#include "lc_test.h"
#include "../283-move-zeroes/move-zeroes.cpp"

TEST_MAIN {
    vector<int> a{0, 1, 0, 3, 12};
    Solution().moveZeroes(a);
    CHECK_EQ(a, (vector<int>{1, 3, 12, 0, 0}));

    vector<int> b{0};
    Solution().moveZeroes(b);
    CHECK_EQ(b, (vector<int>{0}));

    vector<int> c{1, 2, 3};
    Solution().moveZeroes(c);
    CHECK_EQ(c, (vector<int>{1, 2, 3}));

    vector<int> d{0, 0, 1};
    Solution().moveZeroes(d);
    CHECK_EQ(d, (vector<int>{1, 0, 0}));
}
