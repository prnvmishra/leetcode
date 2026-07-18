#include "lc_test.h"
#include "../1446-angle-between-hands-of-a-clock/angle-between-hands-of-a-clock.cpp"

static void near(double got, double want) {
    CHECK(fabs(got - want) < 1e-6);
}

TEST_MAIN {
    near(Solution().angleClock(12, 30), 165.0);
    near(Solution().angleClock(3, 30), 75.0);
    near(Solution().angleClock(3, 15), 7.5);
    near(Solution().angleClock(4, 50), 155.0);
    near(Solution().angleClock(12, 0), 0.0);
}
