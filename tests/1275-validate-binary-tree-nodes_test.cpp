#include "lc_test.h"
#include "../1275-validate-binary-tree-nodes/validate-binary-tree-nodes.cpp"

TEST_MAIN {
    vector<int> l1{1, -1, 3, -1}, r1{2, -1, -1, -1};
    CHECK_EQ(Solution().validateBinaryTreeNodes(4, l1, r1), true);

    vector<int> l2{1, -1, 3, -1}, r2{2, 3, -1, -1};
    CHECK_EQ(Solution().validateBinaryTreeNodes(4, l2, r2), false);

    vector<int> l3{1, 0}, r3{-1, -1};
    CHECK_EQ(Solution().validateBinaryTreeNodes(2, l3, r3), false);

    vector<int> l4{1, -1}, r4{-1, -1};
    CHECK_EQ(Solution().validateBinaryTreeNodes(2, l4, r4), true);
}
