#include "lc_test.h"
#include "../34-find-first-and-last-position-of-element-in-sorted-array/find-first-and-last-position-of-element-in-sorted-array.cpp"

TEST_MAIN {
    vector<int> a{5, 7, 7, 8, 8, 10};
    CHECK_EQ(Solution().searchRange(a, 8), (vector<int>{3, 4}));
    CHECK_EQ(Solution().searchRange(a, 6), (vector<int>{-1, -1}));

    vector<int> b{};
    CHECK_EQ(Solution().searchRange(b, 0), (vector<int>{-1, -1}));

    vector<int> c{1};
    CHECK_EQ(Solution().searchRange(c, 1), (vector<int>{0, 0}));
}
