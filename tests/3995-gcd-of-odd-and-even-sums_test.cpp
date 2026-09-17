#include "lc_test.h"
#include "../3995-gcd-of-odd-and-even-sums/gcd-of-odd-and-even-sums.cpp"

// sum of first n odd numbers = n^2, sum of first n even = n*(n+1);
// gcd(n^2, n^2 + n) = n.
TEST_MAIN {
    CHECK_EQ(Solution().gcdOfOddEvenSums(1), 1);
    CHECK_EQ(Solution().gcdOfOddEvenSums(2), 2);
    CHECK_EQ(Solution().gcdOfOddEvenSums(4), 4);
    CHECK_EQ(Solution().gcdOfOddEvenSums(10), 10);
}
