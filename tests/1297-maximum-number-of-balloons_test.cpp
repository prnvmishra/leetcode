#include "lc_test.h"
#include "../1297-maximum-number-of-balloons/maximum-number-of-balloons.cpp"

TEST_MAIN {
    CHECK_EQ(Solution().maxNumberOfBalloons("nlaebolko"), 1);
    CHECK_EQ(Solution().maxNumberOfBalloons("loonbalxballpoon"), 2);
    CHECK_EQ(Solution().maxNumberOfBalloons("leetcode"), 0);
    CHECK_EQ(Solution().maxNumberOfBalloons("balloon"), 1);
    CHECK_EQ(Solution().maxNumberOfBalloons(""), 0);
}
