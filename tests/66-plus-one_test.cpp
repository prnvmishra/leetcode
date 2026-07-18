#include "lc_test.h"
#include "../66-plus-one/plus-one.cpp"

TEST_MAIN {
    vector<int> a{1, 2, 3};
    CHECK_EQ(Solution().plusOne(a), (vector<int>{1, 2, 4}));

    vector<int> b{4, 3, 2, 1};
    CHECK_EQ(Solution().plusOne(b), (vector<int>{4, 3, 2, 2}));

    vector<int> c{9};
    CHECK_EQ(Solution().plusOne(c), (vector<int>{1, 0}));

    vector<int> d{9, 9, 9};
    CHECK_EQ(Solution().plusOne(d), (vector<int>{1, 0, 0, 0}));
}
