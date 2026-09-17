#include "lc_test.h"
#include "../93-restore-ip-addresses/restore-ip-addresses.cpp"

TEST_MAIN {
    CHECK_EQ(lctest::equalUnordered(
                 Solution().restoreIpAddresses("25525511135"),
                 vector<string>{"255.255.11.135", "255.255.111.35"}),
             true);

    CHECK_EQ(Solution().restoreIpAddresses("0000"),
             (vector<string>{"0.0.0.0"}));

    CHECK_EQ(lctest::equalUnordered(
                 Solution().restoreIpAddresses("101023"),
                 vector<string>{"1.0.10.23", "1.0.102.3", "10.1.0.23",
                                "10.10.2.3", "101.0.2.3"}),
             true);

    CHECK_EQ(Solution().restoreIpAddresses("1").size(), (size_t)0);
}
