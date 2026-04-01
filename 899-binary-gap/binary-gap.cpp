class Solution {
public:
    int binaryGap(int n) {
        int prev = -1;
        int index = 0;
        int maxDist = 0;

        while (n > 0) {
            if (n & 1) {  // if current bit is 1
                if (prev != -1) {
                    maxDist = max(maxDist, index - prev);
                }
                prev = index;
            }
            index++;
            n >>= 1;  // right shift
        }

        return maxDist;
    }
};