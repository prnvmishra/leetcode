class Solution {
public:
    vector<string> ans;

    bool valid(string s) {
        if (s.size() > 1 && s[0] == '0') return false;
        int num = stoi(s);
        return num >= 0 && num <= 255;
    }

    void solve(string &s, int idx, int parts, string cur) {
        if (parts == 4) {
            if (idx == s.size()) {
                cur.pop_back(); // remove last '.'
                ans.push_back(cur);
            }
            return;
        }

        for (int len = 1; len <= 3 && idx + len <= s.size(); len++) {
            string part = s.substr(idx, len);

            if (valid(part)) {
                solve(s, idx + len, parts + 1, cur + part + ".");
            }
        }
    }

    vector<string> restoreIpAddresses(string s) {
        ans.clear();
        solve(s, 0, 0, "");
        return ans;
    }
};