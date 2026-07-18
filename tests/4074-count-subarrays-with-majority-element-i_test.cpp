#include "lc_test.h"
#include "../4074-count-subarrays-with-majority-element-i/count-subarrays-with-majority-element-i.cpp"

static long long brute(const vector<int> &nums, int target) {
    long long cnt = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int occ = 0;
        for (int j = i; j < n; j++) {
            if (nums[j] == target) occ++;
            if (occ * 2 > (j - i + 1)) cnt++;
        }
    }
    return cnt;
}

TEST_MAIN {
    vector<int> a{1, 2, 2, 3};
    CHECK_EQ(Solution().countMajoritySubarrays(a, 2), 5LL);
    CHECK_EQ(Solution().countMajoritySubarrays(a, 2), brute(a, 2));

    vector<int> b{1, 1, 1, 1};
    CHECK_EQ(Solution().countMajoritySubarrays(b, 1), 10LL);

    vector<int> c{1, 2, 3};
    CHECK_EQ(Solution().countMajoritySubarrays(c, 4), 0LL);

    vector<int> d{3, 1, 3, 3, 1, 3, 1};
    CHECK_EQ(Solution().countMajoritySubarrays(d, 3), brute(d, 3));
}
