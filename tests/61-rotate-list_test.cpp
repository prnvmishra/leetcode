#include "lc_test.h"
#include "../61-rotate-list/rotate-list.cpp"

using lctest::buildList;
using lctest::listToVector;

TEST_MAIN {
    CHECK_EQ(listToVector(Solution().rotateRight(buildList({1, 2, 3, 4, 5}), 2)),
             (vector<int>{4, 5, 1, 2, 3}));

    CHECK_EQ(listToVector(Solution().rotateRight(buildList({0, 1, 2}), 4)),
             (vector<int>{2, 0, 1}));

    CHECK_EQ(listToVector(Solution().rotateRight(buildList({1, 2, 3}), 3)),
             (vector<int>{1, 2, 3}));

    CHECK_EQ(listToVector(Solution().rotateRight(buildList({}), 1)),
             (vector<int>{}));
}
