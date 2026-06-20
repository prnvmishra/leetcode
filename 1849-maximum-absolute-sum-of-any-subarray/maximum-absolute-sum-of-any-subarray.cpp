class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int Minarr = nums[0];
        int Maxarr = nums[0];
        int maxii = nums[0];
        int mini = nums[0];
        for(int i = 1; i<nums.size(); i++){
            Minarr= min(nums[i], Minarr + nums[i]);
            Maxarr= max(nums[i], Maxarr + nums[i]);
            maxii = max(maxii, Maxarr);
            mini = min(mini, Minarr); 
        }

        return max(abs(maxii), abs(mini));
        
    }
};