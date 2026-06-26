class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int cm = 1;
        int res =1;
        int off = 0;
        while(cm<n){
            if(nums[cm]==nums[cm-1]){
                cm++;

            }
            else{
                nums[off+1]= nums[cm];
                off++;
                cm++;
                res++;
            }

        }

        return res;
        
    }
};