#include "lc_test.h"
#include "../142-linked-list-cycle-ii/linked-list-cycle-ii.cpp"

using lctest::buildList;
using lctest::nodeAt;

static ListNode *withCycle(const vector<int> &vals, int pos) {
    ListNode *head = buildList(vals);
    ListNode *tail = head;
    while (tail && tail->next) tail = tail->next;
    if (pos >= 0) tail->next = nodeAt(head, pos);
    return head;
}

static int valOrNeg1(ListNode *n) { return n ? n->val : -1; }

TEST_MAIN {
    CHECK_EQ(valOrNeg1(Solution().detectCycle(withCycle({3, 2, 0, -4}, 1))), 2);
    CHECK_EQ(valOrNeg1(Solution().detectCycle(withCycle({1, 2}, 0))), 1);
    CHECK_EQ(valOrNeg1(Solution().detectCycle(withCycle({1}, -1))), -1);
    CHECK_EQ(valOrNeg1(Solution().detectCycle(withCycle({1, 2, 3}, -1))), -1);
}
