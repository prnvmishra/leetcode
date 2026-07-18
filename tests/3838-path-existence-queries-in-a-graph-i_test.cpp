#include "lc_test.h"
#include "../3838-path-existence-queries-in-a-graph-i/path-existence-queries-in-a-graph-i.cpp"

TEST_MAIN {
    vector<int> nums{1, 3, 5, 6, 9};
    vector<vector<int>> q{{0, 1}, {0, 4}, {3, 4}};
    CHECK_EQ(Solution().pathExistenceQueries(5, nums, 2, q),
             (vector<bool>{true, false, false}));

    vector<int> nums2{1, 2, 3};
    vector<vector<int>> q2{{0, 2}};
    CHECK_EQ(Solution().pathExistenceQueries(3, nums2, 1, q2),
             (vector<bool>{true}));
}
