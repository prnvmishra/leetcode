#include "lc_test.h"
#include "../80-remove-duplicates-from-sorted-array-ii/remove-duplicates-from-sorted-array-ii.cpp"

TEST_MAIN {
    vector<int> a{1, 1, 1, 2, 2, 3};
    int k = Solution().removeDuplicates(a);
    CHECK_EQ(k, 5);
    CHECK_EQ((vector<int>(a.begin(), a.begin() + k)),
             (vector<int>{1, 1, 2, 2, 3}));

    vector<int> b{0, 0, 1, 1, 1, 1, 2, 3, 3};
    int k2 = Solution().removeDuplicates(b);
    CHECK_EQ(k2, 7);
    CHECK_EQ((vector<int>(b.begin(), b.begin() + k2)),
             (vector<int>{0, 0, 1, 1, 2, 3, 3}));

    vector<int> c{1};
    CHECK_EQ(Solution().removeDuplicates(c), 1);
}
