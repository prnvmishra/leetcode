#include "lc_test.h"
#include "../3608-find-the-number-of-subsequences-with-equal-gcd/find-the-number-of-subsequences-with-equal-gcd.cpp"

TEST_MAIN {
    vector<int> a{1, 2, 3, 4};
    CHECK_EQ(Solution().subsequencePairCount(a), 10);

    vector<int> b{10, 20, 30};
    CHECK_EQ(Solution().subsequencePairCount(b), 2);

    vector<int> c{1, 1, 1, 1};
    CHECK_EQ(Solution().subsequencePairCount(c), 50);
}
