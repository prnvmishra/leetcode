#include "lc_test.h"
#include "../3939-process-string-with-special-operations-ii/process-string-with-special-operations-ii.cpp"

// Final string for "a#b%*" is "ba"; for "cd%#*" is "dcd".
TEST_MAIN {
    CHECK_EQ(Solution().processStr("a#b%*", 0), 'b');
    CHECK_EQ(Solution().processStr("a#b%*", 1), 'a');
    CHECK_EQ(Solution().processStr("a#b%*", 2), '.');

    CHECK_EQ(Solution().processStr("cd%#*", 0), 'd');
    CHECK_EQ(Solution().processStr("cd%#*", 1), 'c');
    CHECK_EQ(Solution().processStr("cd%#*", 2), 'd');
    CHECK_EQ(Solution().processStr("cd%#*", 3), '.');
}
