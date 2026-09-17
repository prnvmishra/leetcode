# Unit tests

This directory holds unit tests for the C++ solutions in the repository.

## Background: test-coverage analysis

Before these tests were added the repository had **no test infrastructure at
all** — every solution had 0% coverage. The code base is:

- **94** C++ solution files (`class Solution { ... }`)
- **32** SQL solution files
- README/notes markdown

The least-covered "modules" were therefore all of them equally. Because the SQL
solutions require a database to exercise, the highest-value target was the C++
solutions, so this suite focuses there.

## What's covered

**92 of the 94** C++ solutions have a unit test (one `*_test.cpp` per problem).
Two are intentionally not covered by the automated build:

| Problem | Reason |
| --- | --- |
| `1203-print-in-order` | Concurrency/threading problem; ordering is not deterministically unit-testable without a scheduler harness. |
| `2582-minimum-score-of-a-path-between-two-cities` | Uses the C++23 "deducing `this`" lambda syntax (`[&](this auto& self, ...)`) which the toolchain's g++ 11 does not support. It compiles only on g++ 14+. |

## How it works

The solution files are written for the LeetCode judge, so they assume the
standard headers, `using namespace std;`, and the `ListNode` / `TreeNode`
structs are already in scope. [`lc_test.h`](lc_test.h) provides all of that plus:

- assertion macros: `CHECK`, `CHECK_EQ`, `CHECK_FALSE`
- linked-list / binary-tree builders and helpers
- pretty-printers and an order-insensitive `equalUnordered`
- a `TEST_MAIN` macro that defines `main()` and prints a pass/fail summary

Each test simply includes the header and the solution under test:

```cpp
#include "lc_test.h"
#include "../217-contains-duplicate/contains-duplicate.cpp"

TEST_MAIN {
    vector<int> a{1, 2, 3, 1};
    CHECK_EQ(Solution().containsDuplicate(a), true);
}
```

Every test file is a self-contained executable, so each solution's
`class Solution` lives in its own translation unit and there are no clashes.

## Running the tests

```bash
cd tests
./run_tests.sh            # build & run everything
./run_tests.sh 217 15     # only tests whose filename matches these patterns
CXX=g++-14 ./run_tests.sh # override the compiler (e.g. to also build 2582)
```

The runner compiles with `-std=c++20` by default (override with `CXXSTD`) and
exits non-zero if any test fails to build or fails an assertion.
