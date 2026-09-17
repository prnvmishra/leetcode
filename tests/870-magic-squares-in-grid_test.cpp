#include "lc_test.h"
#include "../870-magic-squares-in-grid/magic-squares-in-grid.cpp"

TEST_MAIN {
    vector<vector<int>> a{{4, 3, 8, 4}, {9, 5, 1, 9}, {2, 7, 6, 2}};
    CHECK_EQ(Solution().numMagicSquaresInside(a), 1);

    vector<vector<int>> b{{8}};
    CHECK_EQ(Solution().numMagicSquaresInside(b), 0);

    vector<vector<int>> c{{4, 4}, {3, 3}};
    CHECK_EQ(Solution().numMagicSquaresInside(c), 0);

    vector<vector<int>> d{{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
    CHECK_EQ(Solution().numMagicSquaresInside(d), 1);
}
