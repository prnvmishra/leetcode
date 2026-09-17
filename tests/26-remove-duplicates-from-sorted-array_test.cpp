#include "lc_test.h"
#include "../26-remove-duplicates-from-sorted-array/remove-duplicates-from-sorted-array.cpp"

TEST_MAIN {
    vector<int> a{1, 1, 2};
    int k = Solution().removeDuplicates(a);
    CHECK_EQ(k, 2);
    CHECK_EQ((vector<int>(a.begin(), a.begin() + k)), (vector<int>{1, 2}));

    vector<int> b{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k2 = Solution().removeDuplicates(b);
    CHECK_EQ(k2, 5);
    CHECK_EQ((vector<int>(b.begin(), b.begin() + k2)),
             (vector<int>{0, 1, 2, 3, 4}));

    vector<int> c{7};
    CHECK_EQ(Solution().removeDuplicates(c), 1);
}
