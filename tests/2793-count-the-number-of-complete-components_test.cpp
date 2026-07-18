#include "lc_test.h"
#include "../2793-count-the-number-of-complete-components/count-the-number-of-complete-components.cpp"

TEST_MAIN {
    vector<vector<int>> e1{{0, 1}, {0, 2}, {1, 2}, {3, 4}};
    CHECK_EQ(Solution().countCompleteComponents(6, e1), 3);

    vector<vector<int>> e2{{0, 1}, {0, 2}, {1, 2}, {3, 4}, {3, 5}};
    CHECK_EQ(Solution().countCompleteComponents(6, e2), 1);

    vector<vector<int>> e3{};
    CHECK_EQ(Solution().countCompleteComponents(3, e3), 3);
}
