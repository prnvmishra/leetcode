#include "lc_test.h"
#include "../2598-shortest-distance-to-target-string-in-a-circular-array/shortest-distance-to-target-string-in-a-circular-array.cpp"

TEST_MAIN {
    vector<string> a{"hello", "i", "am", "leetcode", "hello"};
    CHECK_EQ(Solution().closestTarget(a, "hello", 1), 1);

    vector<string> b{"a", "b", "leetcode"};
    CHECK_EQ(Solution().closestTarget(b, "leetcode", 0), 1);

    vector<string> c{"i", "eat", "leetcode"};
    CHECK_EQ(Solution().closestTarget(c, "ate", 0), -1);
}
