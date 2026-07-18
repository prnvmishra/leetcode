#include "lc_test.h"
#include "../899-binary-gap/binary-gap.cpp"

TEST_MAIN {
    CHECK_EQ(Solution().binaryGap(22), 2);   // 10110
    CHECK_EQ(Solution().binaryGap(8), 0);    // 1000
    CHECK_EQ(Solution().binaryGap(5), 2);    // 101
    CHECK_EQ(Solution().binaryGap(6), 1);    // 110
    CHECK_EQ(Solution().binaryGap(1), 0);
}
