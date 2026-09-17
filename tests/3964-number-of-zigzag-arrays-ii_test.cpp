#include "lc_test.h"
#include "../3964-number-of-zigzag-arrays-ii/number-of-zigzag-arrays-ii.cpp"

static long long brute(int n, int m) {
    vector<int> a(n);
    long long cnt = 0;
    function<void(int)> rec = [&](int idx) {
        if (idx == n) {
            for (int i = 0; i + 1 < n; i++)
                if (a[i] == a[i + 1]) return;
            for (int i = 0; i + 2 < n; i++)
                if ((a[i] < a[i + 1]) == (a[i + 1] < a[i + 2])) return;
            cnt++;
            return;
        }
        for (int v = 0; v < m; v++) {
            a[idx] = v;
            rec(idx + 1);
        }
    };
    rec(0);
    return cnt % 1000000007LL;
}

TEST_MAIN {
    CHECK_EQ((long long)Solution().zigZagArrays(3, 4, 5), 2LL);
    for (int n = 3; n <= 6; n++)
        for (int m = 2; m <= 4; m++)
            CHECK_EQ((long long)Solution().zigZagArrays(n, 1, m), brute(n, m));
}
