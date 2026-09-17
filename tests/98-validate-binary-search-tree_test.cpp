#include "lc_test.h"
#include "../98-validate-binary-search-tree/validate-binary-search-tree.cpp"

using lctest::buildTree;
static const int N = INT_MIN;

TEST_MAIN {
    CHECK_EQ(Solution().isValidBST(buildTree({2, 1, 3})), true);
    CHECK_EQ(Solution().isValidBST(buildTree({5, 1, 4, N, N, 3, 6})), false);
    CHECK_EQ(Solution().isValidBST(buildTree({2, 2, 2})), false);
    CHECK_EQ(Solution().isValidBST(buildTree({5})), true);
    CHECK_EQ(Solution().isValidBST(buildTree({10, 5, 15, N, N, 6, 20})), false);
}
