#include "lc_test.h"
#include "../662-maximum-width-of-binary-tree/maximum-width-of-binary-tree.cpp"

using lctest::buildTree;
static const int N = INT_MIN;

TEST_MAIN {
    CHECK_EQ(Solution().widthOfBinaryTree(
                 buildTree({1, 3, 2, 5, 3, N, 9})),
             4);
    CHECK_EQ(Solution().widthOfBinaryTree(
                 buildTree({1, 2, 3, 4, 5, 6, 7})),
             4);
    CHECK_EQ(Solution().widthOfBinaryTree(buildTree({1, 3, 2, 5})), 2);
    CHECK_EQ(Solution().widthOfBinaryTree(buildTree({1})), 1);
    CHECK_EQ(Solution().widthOfBinaryTree(nullptr), 0);
}
