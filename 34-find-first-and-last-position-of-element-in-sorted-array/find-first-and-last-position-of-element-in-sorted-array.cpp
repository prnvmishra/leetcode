class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();
        int left = 0, right = n - 1;
        int first = -1, last = -1;

        // Find first position
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                first = mid;
                right = mid - 1;   // keep searching left
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        // Reset for last position
        left = 0;
        right = n - 1;

        // Find last position
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                last = mid;
                left = mid + 1;    // keep searching right
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return {first, last};
    }
};