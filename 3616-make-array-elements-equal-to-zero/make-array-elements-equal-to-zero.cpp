class Solution {
public:
    int simulate(vector<int> nums, int curr, int dir) {
        int n = nums.size();

        while (curr >= 0 && curr < n) {
            if (nums[curr] == 0) {
                curr += dir;
            } else {
                nums[curr]--;
                dir *= -1;
                curr += dir;
            }
        }

        for (int x : nums) {
            if (x != 0) return 0;
        }
        return 1;
    }

    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                count += simulate(nums, i, -1); // left
                count += simulate(nums, i, 1);  // right
            }
        }

        return count;
    }
};