class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        
        // Count ones
        int ones = 0;
        for(int x : nums) if(x == 1) ones++;
        
        // Case 1: Already have 1
        if(ones > 0) return n - ones;
        
        // Case 2: Find smallest subarray with gcd = 1
        int minLen = INT_MAX;
        
        for(int i = 0; i < n; i++) {
            int g = nums[i];
            for(int j = i; j < n; j++) {
                g = __gcd(g, nums[j]);
                if(g == 1) {
                    minLen = min(minLen, j - i + 1);
                    break;
                }
            }
        }
        
        // Case 3: Impossible
        if(minLen == INT_MAX) return -1;
        
        return minLen + n - 2;
    }
};