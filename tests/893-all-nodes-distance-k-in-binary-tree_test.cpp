#include "lc_test.h"
#include "../893-all-nodes-distance-k-in-binary-tree/all-nodes-distance-k-in-binary-tree.cpp"

using lctest::buildTree;
static const int N = INT_MIN;

static TreeNode *findNode(TreeNode *root, int val) {
    if (!root) return nullptr;
    if (root->val == val) return root;
    if (TreeNode *l = findNode(root->left, val)) return l;
    return findNode(root->right, val);
}

TEST_MAIN {
    TreeNode *root = buildTree({3, 5, 1, 6, 2, 0, 8, N, N, 7, 4});
    CHECK_EQ(lctest::equalUnordered(
                 Solution().distanceK(root, findNode(root, 5), 2),
                 vector<int>{7, 4, 1}),
             true);

    TreeNode *root2 = buildTree({1});
    CHECK_EQ(Solution().distanceK(root2, findNode(root2, 1), 3).size(),
             (size_t)0);

    TreeNode *root3 = buildTree({0, 1, N, 3, 2});
    CHECK_EQ(lctest::equalUnordered(
                 Solution().distanceK(root3, findNode(root3, 2), 1),
                 vector<int>{1}),
             true);
}
