#include "lc_test.h"
#include "../906-walking-robot-simulation/walking-robot-simulation.cpp"

TEST_MAIN {
    vector<int> c1{4, -1, 3};
    vector<vector<int>> o1{};
    CHECK_EQ(Solution().robotSim(c1, o1), 25);

    vector<int> c2{4, -1, 4, -2, 4};
    vector<vector<int>> o2{{2, 4}};
    CHECK_EQ(Solution().robotSim(c2, o2), 65);

    vector<int> c3{6, -1, -1, 6};
    vector<vector<int>> o3{};
    CHECK_EQ(Solution().robotSim(c3, o3), 36);
}
