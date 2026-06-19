class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxii = 0 ;
        int curr = 0;
        for( int x: gain){
            curr+=x;
            maxii = max(maxii,curr);
        }

        return maxii;
        
    }
};