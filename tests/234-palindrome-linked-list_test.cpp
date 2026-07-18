#include "lc_test.h"
#include "../234-palindrome-linked-list/palindrome-linked-list.cpp"

using lctest::buildList;

TEST_MAIN {
    CHECK_EQ(Solution().isPalindrome(buildList({1, 2, 2, 1})), true);
    CHECK_EQ(Solution().isPalindrome(buildList({1, 2})), false);
    CHECK_EQ(Solution().isPalindrome(buildList({1, 2, 3, 2, 1})), true);
    CHECK_EQ(Solution().isPalindrome(buildList({1})), true);
    CHECK_EQ(Solution().isPalindrome(buildList({1, 0, 1})), true);
}
