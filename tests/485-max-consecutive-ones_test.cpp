#include "lc_test.h"
#include "../485-max-consecutive-ones/max-consecutive-ones.cpp"

TEST_MAIN {
    vector<int> a{1, 1, 0, 1, 1, 1};
    CHECK_EQ(Solution().findMaxConsecutiveOnes(a), 3);

    vector<int> b{1, 0, 1, 1, 0, 1};
    CHECK_EQ(Solution().findMaxConsecutiveOnes(b), 2);

    vector<int> c{0, 0, 0};
    CHECK_EQ(Solution().findMaxConsecutiveOnes(c), 0);

    vector<int> d{1, 1, 1};
    CHECK_EQ(Solution().findMaxConsecutiveOnes(d), 3);
}
