#include "lc_test.h"
#include "../3299-find-the-maximum-number-of-elements-in-subset/find-the-maximum-number-of-elements-in-subset.cpp"

TEST_MAIN {
    vector<int> a{5, 4, 1, 2, 2};
    CHECK_EQ(Solution().maximumLength(a), 3);

    vector<int> b{1, 3, 2, 4};
    CHECK_EQ(Solution().maximumLength(b), 1);

    vector<int> c{1, 1, 1};
    CHECK_EQ(Solution().maximumLength(c), 3);

    vector<int> d{2, 4, 2};
    CHECK_EQ(Solution().maximumLength(d), 3);
}
