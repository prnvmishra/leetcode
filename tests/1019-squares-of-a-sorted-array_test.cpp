#include "lc_test.h"
#include "../1019-squares-of-a-sorted-array/squares-of-a-sorted-array.cpp"

TEST_MAIN {
    vector<int> a{-4, -1, 0, 3, 10};
    CHECK_EQ(Solution().sortedSquares(a), (vector<int>{0, 1, 9, 16, 100}));

    vector<int> b{-7, -3, 2, 3, 11};
    CHECK_EQ(Solution().sortedSquares(b), (vector<int>{4, 9, 9, 49, 121}));

    vector<int> allNeg{-5, -3, -1};
    CHECK_EQ(Solution().sortedSquares(allNeg), (vector<int>{1, 9, 25}));

    vector<int> allPos{1, 2, 3};
    CHECK_EQ(Solution().sortedSquares(allPos), (vector<int>{1, 4, 9}));

    vector<int> one{-2};
    CHECK_EQ(Solution().sortedSquares(one), (vector<int>{4}));
}
