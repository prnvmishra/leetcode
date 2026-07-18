#include "lc_test.h"
#include "../3476-find-minimum-operations-to-make-all-elements-divisible-by-three/find-minimum-operations-to-make-all-elements-divisible-by-three.cpp"

TEST_MAIN {
    vector<int> a{1, 2, 3, 4};
    CHECK_EQ(Solution().minimumOperations(a), 3);

    vector<int> b{3, 6, 9};
    CHECK_EQ(Solution().minimumOperations(b), 0);

    vector<int> c{1, 1, 1};
    CHECK_EQ(Solution().minimumOperations(c), 3);
}
