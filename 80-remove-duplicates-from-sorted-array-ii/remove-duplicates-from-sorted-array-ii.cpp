class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<2){
            return n;
        }
        

        int cm = 2;
        int off = 1;   
        int res = 2;   

        while (cm < n) {
            if (nums[cm] == nums[off] &&
                nums[cm] == nums[off - 1]) {
                cm++;
            }
            else {
                nums[off + 1] = nums[cm];
                off++;
                cm++;
                res++;
            }
        }

        return res;
    }
};