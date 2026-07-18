#include "lc_test.h"
#include "../169-majority-element/majority-element.cpp"

TEST_MAIN {
    vector<int> a{3, 2, 3};
    CHECK_EQ(Solution().majorityElement(a), 3);

    vector<int> b{2, 2, 1, 1, 1, 2, 2};
    CHECK_EQ(Solution().majorityElement(b), 2);

    vector<int> c{1};
    CHECK_EQ(Solution().majorityElement(c), 1);

    vector<int> d{6, 6, 6, 7, 7};
    CHECK_EQ(Solution().majorityElement(d), 6);
}
