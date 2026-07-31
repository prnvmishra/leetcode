class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int max_diff = INT_MAX;
        int result_sum = 0;

        int n = nums.size();
        for(int i = 0; i<n-2 ; i++){
            int left = i+1;
            int right = n-1;

            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                int diff = abs(sum-target);
                if(diff<max_diff){
                    max_diff = diff;
                    result_sum = sum;

                }
                if(sum==target){
                    left++;
                    right--;
                    while(left<n && nums[left]== nums[left-1]){
                        left++;
                    }
                    while(right>=0 && nums[right]== nums[right+1]){
                        right--;
                    }

                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }

        }

        return result_sum;
        
    }
};