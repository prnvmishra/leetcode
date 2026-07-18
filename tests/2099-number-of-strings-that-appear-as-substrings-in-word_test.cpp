#include "lc_test.h"
#include "../2099-number-of-strings-that-appear-as-substrings-in-word/number-of-strings-that-appear-as-substrings-in-word.cpp"

TEST_MAIN {
    vector<string> a{"a", "abc", "bc", "d"};
    CHECK_EQ(Solution().numOfStrings(a, "abc"), 3);

    vector<string> b{"a", "b", "c"};
    CHECK_EQ(Solution().numOfStrings(b, "aaaaabbbbb"), 2);

    vector<string> c{"abc", "bc", "bcd"};
    CHECK_EQ(Solution().numOfStrings(c, "abcd"), 3);
}
