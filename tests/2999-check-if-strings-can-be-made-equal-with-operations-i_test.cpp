#include "lc_test.h"
#include "../2999-check-if-strings-can-be-made-equal-with-operations-i/check-if-strings-can-be-made-equal-with-operations-i.cpp"

TEST_MAIN {
    CHECK_EQ(Solution().canBeEqual("abcd", "cdab"), true);
    CHECK_EQ(Solution().canBeEqual("abcd", "dacb"), false);
    CHECK_EQ(Solution().canBeEqual("abcd", "abcd"), true);
}
