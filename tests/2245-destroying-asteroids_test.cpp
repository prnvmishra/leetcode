#include "lc_test.h"
#include "../2245-destroying-asteroids/destroying-asteroids.cpp"

TEST_MAIN {
    vector<int> a{3, 9, 19, 5, 21};
    CHECK_EQ(Solution().asteroidsDestroyed(10, a), true);

    vector<int> b{4, 9, 23, 4};
    CHECK_EQ(Solution().asteroidsDestroyed(5, b), false);

    vector<int> c{1};
    CHECK_EQ(Solution().asteroidsDestroyed(1, c), true);
}
