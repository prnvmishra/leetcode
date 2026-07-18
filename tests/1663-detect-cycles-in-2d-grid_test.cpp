#include "lc_test.h"
#include "../1663-detect-cycles-in-2d-grid/detect-cycles-in-2d-grid.cpp"

static vector<vector<char>> grid(const vector<string> &rows) {
    vector<vector<char>> g;
    for (const string &r : rows) g.push_back(vector<char>(r.begin(), r.end()));
    return g;
}

TEST_MAIN {
    auto a = grid({"aaaa", "abca", "abca", "aaaa"});
    CHECK_EQ(Solution().containsCycle(a), true);

    auto b = grid({"cced", "cced", "eddd", "eccc"});
    CHECK_EQ(Solution().containsCycle(b), true);

    auto c = grid({"abb", "cca"});
    CHECK_EQ(Solution().containsCycle(c), false);

    auto d = grid({"a"});
    CHECK_EQ(Solution().containsCycle(d), false);
}
