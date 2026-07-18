#include "lc_test.h"
#include "../4242-sum-of-gcd-of-formed-pairs/sum-of-gcd-of-formed-pairs.cpp"

// Independent reference implementation of the problem statement.
static long long spec(vector<int> nums) {
    int n = nums.size();
    vector<int> pg(n);
    int mx = 0;
    for (int i = 0; i < n; i++) {
        mx = max(mx, nums[i]);
        pg[i] = std::gcd(nums[i], mx);
    }
    sort(pg.begin(), pg.end());
    long long res = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--) res += std::gcd(pg[i], pg[j]);
    return res;
}

TEST_MAIN {
    vector<int> a{2, 6, 4};
    CHECK_EQ(Solution().gcdSum(a), 2LL);
    CHECK_EQ(Solution().gcdSum(a), spec({2, 6, 4}));

    vector<int> b{12, 8, 6, 4, 3};
    CHECK_EQ(Solution().gcdSum(b), spec({12, 8, 6, 4, 3}));

    vector<int> c{5, 10, 15, 20};
    CHECK_EQ(Solution().gcdSum(c), spec({5, 10, 15, 20}));
}
