#include "lc_test.h"
#include "../3019-furthest-point-from-origin/furthest-point-from-origin.cpp"

TEST_MAIN {
    CHECK_EQ(Solution().furthestDistanceFromOrigin("L_RL__R"), 3);
    CHECK_EQ(Solution().furthestDistanceFromOrigin("_R__LL_"), 5);
    CHECK_EQ(Solution().furthestDistanceFromOrigin("_______"), 7);
    CHECK_EQ(Solution().furthestDistanceFromOrigin("LR"), 0);
}
