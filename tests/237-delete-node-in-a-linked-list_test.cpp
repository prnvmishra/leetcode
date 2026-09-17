#include "lc_test.h"
#include "../237-delete-node-in-a-linked-list/delete-node-in-a-linked-list.cpp"

using lctest::buildList;
using lctest::nodeAt;
using lctest::listToVector;

TEST_MAIN {
    ListNode *a = buildList({4, 5, 1, 9});
    Solution().deleteNode(nodeAt(a, 1));  // delete node with value 5
    CHECK_EQ(listToVector(a), (vector<int>{4, 1, 9}));

    ListNode *b = buildList({4, 5, 1, 9});
    Solution().deleteNode(nodeAt(b, 2));  // delete node with value 1
    CHECK_EQ(listToVector(b), (vector<int>{4, 5, 9}));

    ListNode *c = buildList({1, 2});
    Solution().deleteNode(nodeAt(c, 0));  // delete head-ish node
    CHECK_EQ(listToVector(c), (vector<int>{2}));
}
