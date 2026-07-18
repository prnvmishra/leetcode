// Minimal single-header unit-test + LeetCode helper library.
//
// Each test file:
//   #include "lc_test.h"
//   #include "../<problem-folder>/<solution>.cpp"   // brings in class Solution
//   TEST_MAIN {
//       CHECK_EQ(Solution().method(args), expected);
//   }
//
// The solution files are written for the LeetCode judge, so they assume the
// standard headers, `using namespace std;` and the ListNode / TreeNode structs
// are already in scope. This header provides all of that before the solution is
// included.
#ifndef LC_TEST_H
#define LC_TEST_H

#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------------------------------------------
// Common LeetCode data structures (normally provided by the judge).
// ---------------------------------------------------------------------------
#ifndef LC_LISTNODE_DEFINED
#define LC_LISTNODE_DEFINED
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
#endif

#ifndef LC_TREENODE_DEFINED
#define LC_TREENODE_DEFINED
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};
#endif

namespace lctest {

// ------------------------- Linked list helpers -----------------------------
inline ListNode *buildList(const vector<int> &vals) {
    ListNode dummy;
    ListNode *tail = &dummy;
    for (int v : vals) {
        tail->next = new ListNode(v);
        tail = tail->next;
    }
    return dummy.next;
}

inline vector<int> listToVector(ListNode *head) {
    vector<int> out;
    while (head) {
        out.push_back(head->val);
        head = head->next;
    }
    return out;
}

// Build a list and return the node at `pos` (for cycle / delete tests).
inline ListNode *nodeAt(ListNode *head, int pos) {
    while (pos-- > 0 && head) head = head->next;
    return head;
}

inline void freeList(ListNode *head) {
    while (head) {
        ListNode *nxt = head->next;
        delete head;
        head = nxt;
    }
}

// ------------------------- Binary tree helpers -----------------------------
// Build a tree from a LeetCode level-order vector using INT_MIN as the null
// sentinel (so genuine nulls are represented explicitly).
inline TreeNode *buildTree(const vector<int> &vals,
                           int nullMarker = INT_MIN) {
    if (vals.empty() || vals[0] == nullMarker) return nullptr;
    TreeNode *root = new TreeNode(vals[0]);
    queue<TreeNode *> q;
    q.push(root);
    size_t i = 1;
    while (!q.empty() && i < vals.size()) {
        TreeNode *cur = q.front();
        q.pop();
        if (i < vals.size()) {
            if (vals[i] != nullMarker) {
                cur->left = new TreeNode(vals[i]);
                q.push(cur->left);
            }
            ++i;
        }
        if (i < vals.size()) {
            if (vals[i] != nullMarker) {
                cur->right = new TreeNode(vals[i]);
                q.push(cur->right);
            }
            ++i;
        }
    }
    return root;
}

// ------------------------- Pretty-printing ---------------------------------
template <typename T>
string toStr(const T &v);

inline string toStr(const string &s) { return "\"" + s + "\""; }
inline string toStr(const char *s) { return string("\"") + s + "\""; }
inline string toStr(bool b) { return b ? "true" : "false"; }
inline string toStr(char c) { return string("'") + c + "'"; }

template <typename T>
string toStrScalar(const T &v) {
    ostringstream os;
    os << v;
    return os.str();
}

inline string toStr(int v) { return toStrScalar(v); }
inline string toStr(long v) { return toStrScalar(v); }
inline string toStr(long long v) { return toStrScalar(v); }
inline string toStr(unsigned v) { return toStrScalar(v); }
inline string toStr(unsigned long v) { return toStrScalar(v); }
inline string toStr(unsigned long long v) { return toStrScalar(v); }
inline string toStr(double v) { return toStrScalar(v); }

template <typename T>
string toStr(const vector<T> &v) {
    string out = "[";
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) out += ",";
        out += toStr(v[i]);
    }
    return out + "]";
}

// ------------------------- Equality helpers --------------------------------
// Order-insensitive comparison for problems that allow any ordering.
template <typename T>
bool equalUnordered(vector<T> a, vector<T> b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

// ------------------------- Test harness state ------------------------------
struct Registry {
    int checks = 0;
    int failures = 0;
    string current;
};

inline Registry &registry() {
    static Registry r;
    return r;
}

template <typename A, typename B>
void checkEq(const A &got, const B &want, const char *expr, const char *file,
             int line) {
    Registry &r = registry();
    ++r.checks;
    if (!(got == want)) {
        ++r.failures;
        cerr << "  FAIL " << file << ":" << line << "  " << expr << "\n"
             << "        expected " << toStr(want) << "\n"
             << "        got      " << toStr(got) << "\n";
    }
}

inline void checkTrue(bool cond, const char *expr, const char *file, int line) {
    Registry &r = registry();
    ++r.checks;
    if (!cond) {
        ++r.failures;
        cerr << "  FAIL " << file << ":" << line << "  expected true: " << expr
             << "\n";
    }
}

inline int summary(const char *name) {
    Registry &r = registry();
    if (r.failures == 0) {
        cout << "PASS " << name << " (" << r.checks << " checks)\n";
        return 0;
    }
    cout << "FAIL " << name << " (" << r.failures << "/" << r.checks
         << " checks failed)\n";
    return 1;
}

}  // namespace lctest

#define CHECK_EQ(got, want) \
    ::lctest::checkEq((got), (want), #got, __FILE__, __LINE__)
#define CHECK(cond) ::lctest::checkTrue((cond), #cond, __FILE__, __LINE__)
#define CHECK_TRUE(cond) CHECK(cond)
#define CHECK_FALSE(cond) ::lctest::checkTrue(!(cond), "!(" #cond ")", __FILE__, __LINE__)

// Defines main() for a test file. TEST_NAME must be provided at compile time
// (the runner passes -DTEST_NAME="..."); falls back to the file name.
#ifndef TEST_NAME
#define TEST_NAME __FILE__
#endif

#define TEST_MAIN                                    \
    void lc_body();                                  \
    int main() {                                     \
        lc_body();                                   \
        return ::lctest::summary(TEST_NAME);         \
    }                                                \
    void lc_body()

#endif  // LC_TEST_H
