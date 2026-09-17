#include "lc_test.h"
#include "../1234-number-of-paths-with-max-score/number-of-paths-with-max-score.cpp"

TEST_MAIN {
    vector<string> a{"E23", "2X2", "12S"};
    CHECK_EQ(Solution().pathsWithMaxScore(a), (vector<int>{7, 1}));

    vector<string> b{"E12", "1X1", "21S"};
    CHECK_EQ(Solution().pathsWithMaxScore(b), (vector<int>{4, 2}));

    vector<string> c{"E11", "XXX", "11S"};
    CHECK_EQ(Solution().pathsWithMaxScore(c), (vector<int>{0, 0}));
}
