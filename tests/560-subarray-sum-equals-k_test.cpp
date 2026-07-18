#include "lc_test.h"
#include "../560-subarray-sum-equals-k/subarray-sum-equals-k.cpp"

TEST_MAIN {
    vector<int> a{1, 1, 1};
    CHECK_EQ(Solution().subarraySum(a, 2), 2);

    vector<int> b{1, 2, 3};
    CHECK_EQ(Solution().subarraySum(b, 3), 2);

    vector<int> c{1, -1, 0};
    CHECK_EQ(Solution().subarraySum(c, 0), 3);

    vector<int> d{3};
    CHECK_EQ(Solution().subarraySum(d, 3), 1);
}
