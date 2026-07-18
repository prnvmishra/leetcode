#include "lc_test.h"
#include "../27-remove-element/remove-element.cpp"

TEST_MAIN {
    vector<int> a{3, 2, 2, 3};
    int k = Solution().removeElement(a, 3);
    CHECK_EQ(k, 2);
    vector<int> pa(a.begin(), a.begin() + k);
    sort(pa.begin(), pa.end());
    CHECK_EQ(pa, (vector<int>{2, 2}));

    vector<int> b{0, 1, 2, 2, 3, 0, 4, 2};
    int k2 = Solution().removeElement(b, 2);
    CHECK_EQ(k2, 5);
    vector<int> pb(b.begin(), b.begin() + k2);
    sort(pb.begin(), pb.end());
    CHECK_EQ(pb, (vector<int>{0, 0, 1, 3, 4}));

    vector<int> c{1};
    CHECK_EQ(Solution().removeElement(c, 1), 0);
}
