#include "lc_test.h"
#include "../4135-concatenate-non-zero-digits-and-multiply-by-sum-i/concatenate-non-zero-digits-and-multiply-by-sum-i.cpp"

TEST_MAIN {
    // 105 -> "15" = 15, sum 6 -> 90
    CHECK_EQ(Solution().sumAndMultiply(105), 90LL);
    // 10203004 -> 1234, sum 10 -> 12340
    CHECK_EQ(Solution().sumAndMultiply(10203004), 12340LL);
    // 9 -> 9, sum 9 -> 81
    CHECK_EQ(Solution().sumAndMultiply(9), 81LL);
    // 100 -> 1, sum 1 -> 1
    CHECK_EQ(Solution().sumAndMultiply(100), 1LL);
}
