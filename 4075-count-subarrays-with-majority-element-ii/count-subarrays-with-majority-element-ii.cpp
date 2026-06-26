class Solution {
public:
    struct BIT {
        int n;
        vector<long long> bit;

        BIT(int n) {
            this->n = n;
            bit.assign(n + 1, 0);
        }

        void add(int idx, long long val) {
            while (idx <= n) {
                bit[idx] += val;
                idx += idx & -idx;
            }
        }

        long long sum(int idx) {
            long long res = 0;
            while (idx > 0) {
                res += bit[idx];
                idx -= idx & -idx;
            }
            return res;
        }
    };

    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        int OFFSET = n + 2;
        BIT bit(2 * n + 5);

        long long ans = 0;
        int pref = 0;

        bit.add(OFFSET, 1); // prefix sum 0

        for (int x : nums) {
            if (x == target)
                pref++;
            else
                pref--;

            int idx = pref + OFFSET;

            ans += bit.sum(idx - 1);

            bit.add(idx, 1);
        }

        return ans;
    }
};