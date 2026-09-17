#include "lc_test.h"
#include "../217-contains-duplicate/contains-duplicate.cpp"

TEST_MAIN {
    vector<int> a{1, 2, 3, 1};
    CHECK_EQ(Solution().containsDuplicate(a), true);

    vector<int> b{1, 2, 3, 4};
    CHECK_EQ(Solution().containsDuplicate(b), false);

    vector<int> c{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    CHECK_EQ(Solution().containsDuplicate(c), true);

    vector<int> single{7};
    CHECK_EQ(Solution().containsDuplicate(single), false);
}
