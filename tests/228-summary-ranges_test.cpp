#include "lc_test.h"
#include "../228-summary-ranges/summary-ranges.cpp"

TEST_MAIN {
    vector<int> a{0, 1, 2, 4, 5, 7};
    CHECK_EQ(Solution().summaryRanges(a),
             (vector<string>{"0->2", "4->5", "7"}));

    vector<int> b{0, 2, 3, 4, 6, 8, 9};
    CHECK_EQ(Solution().summaryRanges(b),
             (vector<string>{"0", "2->4", "6", "8->9"}));

    vector<int> c{};
    CHECK_EQ(Solution().summaryRanges(c), (vector<string>{}));

    vector<int> d{-1};
    CHECK_EQ(Solution().summaryRanges(d), (vector<string>{"-1"}));
}
