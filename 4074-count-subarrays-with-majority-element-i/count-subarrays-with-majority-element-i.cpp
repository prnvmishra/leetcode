class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        vector<int> pref(n + 1);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + (nums[i] == target ? 1 : -1);
        }

        vector<int> vals = pref;
        sort(vals.begin(), vals.end());
        vals.erase(unique(vals.begin(), vals.end()), vals.end());

        int m = vals.size();
        vector<long long> bit(m + 1);

        auto add = [&](int i) {
            for (; i <= m; i += i & -i)
                bit[i]++;
        };

        auto sum = [&](int i) {
            long long ans = 0;
            for (; i > 0; i -= i & -i)
                ans += bit[i];
            return ans;
        };

        long long ans = 0;

        for (int x : pref) {
            int id =
                lower_bound(vals.begin(), vals.end(), x) -
                vals.begin() + 1;

            ans += sum(id - 1);
            add(id);
        }

        return ans;
    }
};