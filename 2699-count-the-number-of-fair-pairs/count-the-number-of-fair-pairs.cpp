class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        int n = nums.size(); 
        int left = 0 ; 
        int right = n-1;
        long long count=0;
        while(left<right){
            long long sum = (long long)nums[left]+nums[right];
            if(sum<=upper){
                count+=right-left;
                left++;
            }
            else{
                right--;
            }
        }
        left = 0 ;
        right = n-1;
        while(left<right){
            long long sum = (long long)nums[left]+nums[right];
            if(sum<lower){
                count-=right-left;
                left++;
            }
            else{
                right--;
            }
        }

        return count;


    }
};