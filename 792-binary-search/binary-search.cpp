class Solution {
public:
    int search(vector<int>& nums, int target) {
        
         int n = nums.size();
        int start =0;
        int end = n-1;
        int k = target;
        
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==k){
                return mid;
            }
            else if(nums[mid]<k){
                start = mid+1;
            }
            else if( nums[mid]>k){
                end = mid -1;
            }
        }
        return -1;
    }
};