#include "lc_test.h"
#include "../3616-make-array-elements-equal-to-zero/make-array-elements-equal-to-zero.cpp"

TEST_MAIN {
    vector<int> a{1, 0, 2, 0, 3};
    CHECK_EQ(Solution().countValidSelections(a), 2);

    vector<int> b{2, 3, 4, 0, 4, 1, 0};
    CHECK_EQ(Solution().countValidSelections(b), 0);

    vector<int> c{0};
    CHECK_EQ(Solution().countValidSelections(c), 2);
}
