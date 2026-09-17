#include "lc_test.h"
#include "../51-n-queens/n-queens.cpp"

static vector<vector<string>> sortedSolutions(vector<vector<string>> v) {
    sort(v.begin(), v.end());
    return v;
}

TEST_MAIN {
    auto r1 = Solution().solveNQueens(1);
    CHECK_EQ(r1, (vector<vector<string>>{{"Q"}}));

    auto r2 = Solution().solveNQueens(2);
    CHECK_EQ(r2.size(), (size_t)0);

    auto r3 = Solution().solveNQueens(3);
    CHECK_EQ(r3.size(), (size_t)0);

    auto r4 = Solution().solveNQueens(4);
    CHECK_EQ(r4.size(), (size_t)2);
    CHECK_EQ(sortedSolutions(r4),
             sortedSolutions({{".Q..", "...Q", "Q...", "..Q."},
                              {"..Q.", "Q...", "...Q", ".Q.."}}));
}
