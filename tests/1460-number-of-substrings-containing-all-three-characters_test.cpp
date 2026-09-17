#include "lc_test.h"
#include "../1460-number-of-substrings-containing-all-three-characters/number-of-substrings-containing-all-three-characters.cpp"

TEST_MAIN {
    CHECK_EQ(Solution().numberOfSubstrings("abcabc"), 10);
    CHECK_EQ(Solution().numberOfSubstrings("aaacb"), 3);
    CHECK_EQ(Solution().numberOfSubstrings("abc"), 1);
    CHECK_EQ(Solution().numberOfSubstrings("aaaa"), 0);
}
