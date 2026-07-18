#include "lc_test.h"
#include "../2243-check-if-all-as-appears-before-all-bs/check-if-all-as-appears-before-all-bs.cpp"

TEST_MAIN {
    CHECK_EQ(Solution().checkString("aaabbb"), true);
    CHECK_EQ(Solution().checkString("abab"), false);
    CHECK_EQ(Solution().checkString("bbb"), true);
    CHECK_EQ(Solution().checkString("aaa"), true);
    CHECK_EQ(Solution().checkString("a"), true);
}
