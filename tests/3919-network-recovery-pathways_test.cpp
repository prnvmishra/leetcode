#include "lc_test.h"
#include "../3919-network-recovery-pathways/network-recovery-pathways.cpp"

TEST_MAIN {
    vector<vector<int>> e1{{0, 1, 5}, {1, 2, 3}};
    vector<bool> on1{true, true, true};
    CHECK_EQ(Solution().findMaxPathScore(e1, on1, 10), 3);

    vector<vector<int>> e2{{0, 1, 4}, {0, 2, 3}, {1, 2, 5}};
    vector<bool> on2{true, true, true};
    CHECK_EQ(Solution().findMaxPathScore(e2, on2, 100), 4);
}
