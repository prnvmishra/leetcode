#include "lc_test.h"
#include "../4136-concatenate-non-zero-digits-and-multiply-by-sum-ii/concatenate-non-zero-digits-and-multiply-by-sum-ii.cpp"

static int bruteQuery(const string &s, int l, int r) {
    const long long MOD = 1000000007;
    long long x = 0, sum = 0;
    for (int i = l; i <= r; i++) {
        int d = s[i] - '0';
        if (d) {
            x = (x * 10 + d) % MOD;
            sum += d;
        }
    }
    return (int)(x * (sum % MOD) % MOD);
}

TEST_MAIN {
    string s = "10203004";
    vector<vector<int>> q{{0, 7}, {1, 3}, {4, 6}};
    CHECK_EQ(Solution().sumAndMultiply(s, q), (vector<int>{12340, 4, 9}));

    string s2 = "1000";
    vector<vector<int>> q2{{0, 3}, {1, 1}};
    CHECK_EQ(Solution().sumAndMultiply(s2, q2), (vector<int>{1, 0}));

    string s3 = "987654321";
    vector<vector<int>> q3{{0, 8}, {2, 5}, {4, 4}};
    vector<int> want{bruteQuery(s3, 0, 8), bruteQuery(s3, 2, 5),
                     bruteQuery(s3, 4, 4)};
    CHECK_EQ(Solution().sumAndMultiply(s3, q3), want);
}
