#include "lc_test.h"
#include "../141-linked-list-cycle/linked-list-cycle.cpp"

using lctest::buildList;
using lctest::nodeAt;

// Build a list and connect the tail to the node at index `pos` (-1 = no cycle).
static ListNode *withCycle(const vector<int> &vals, int pos) {
    ListNode *head = buildList(vals);
    ListNode *tail = head;
    while (tail && tail->next) tail = tail->next;
    if (pos >= 0) tail->next = nodeAt(head, pos);
    return head;
}

TEST_MAIN {
    CHECK_EQ(Solution().hasCycle(withCycle({3, 2, 0, -4}, 1)), true);
    CHECK_EQ(Solution().hasCycle(withCycle({1, 2}, 0)), true);
    CHECK_EQ(Solution().hasCycle(withCycle({1}, -1)), false);
    CHECK_EQ(Solution().hasCycle(withCycle({1, 2, 3, 4}, -1)), false);
    CHECK_EQ(Solution().hasCycle(nullptr), false);
}
