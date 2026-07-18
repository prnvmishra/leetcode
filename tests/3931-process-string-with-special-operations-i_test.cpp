#include "lc_test.h"
#include "../3931-process-string-with-special-operations-i/process-string-with-special-operations-i.cpp"

TEST_MAIN {
    CHECK_EQ(Solution().processStr("a#b%*"), string("ba"));
    CHECK_EQ(Solution().processStr("z*#"), string(""));
    CHECK_EQ(Solution().processStr("abc"), string("abc"));
    CHECK_EQ(Solution().processStr("ab#"), string("abab"));
    CHECK_EQ(Solution().processStr("ab%"), string("ba"));
}
