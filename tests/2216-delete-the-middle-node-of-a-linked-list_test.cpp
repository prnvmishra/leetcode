#include "lc_test.h"
#include "../2216-delete-the-middle-node-of-a-linked-list/delete-the-middle-node-of-a-linked-list.cpp"

using lctest::buildList;
using lctest::listToVector;

TEST_MAIN {
    CHECK_EQ(listToVector(Solution().deleteMiddle(buildList({1, 3, 4, 7, 1, 2, 6}))),
             (vector<int>{1, 3, 4, 1, 2, 6}));

    CHECK_EQ(listToVector(Solution().deleteMiddle(buildList({1, 2, 3, 4}))),
             (vector<int>{1, 2, 4}));

    CHECK_EQ(listToVector(Solution().deleteMiddle(buildList({2, 1}))),
             (vector<int>{2}));

    CHECK_EQ(listToVector(Solution().deleteMiddle(buildList({1}))),
             (vector<int>{}));
}
