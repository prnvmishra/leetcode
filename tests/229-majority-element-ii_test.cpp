#include "lc_test.h"
#include "../229-majority-element-ii/majority-element-ii.cpp"

TEST_MAIN {
    vector<int> a{3, 2, 3};
    CHECK_EQ(lctest::equalUnordered(Solution().majorityElement(a),
                                    vector<int>{3}),
             true);

    vector<int> b{1};
    CHECK_EQ(Solution().majorityElement(b), (vector<int>{1}));

    vector<int> c{1, 2};
    CHECK_EQ(lctest::equalUnordered(Solution().majorityElement(c),
                                    vector<int>{1, 2}),
             true);

    vector<int> d{2, 2, 1, 3, 1, 1};
    CHECK_EQ(lctest::equalUnordered(Solution().majorityElement(d),
                                    vector<int>{1}),
             true);
}
