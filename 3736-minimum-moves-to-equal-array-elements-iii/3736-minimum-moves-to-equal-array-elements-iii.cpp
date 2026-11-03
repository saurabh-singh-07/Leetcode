class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxNum = INT_MIN;
        for(int i : nums){
            maxNum = max(maxNum , i);
        }
        int ans = 0;
        for(int i : nums){
            ans += maxNum - i;
        }
        return ans;
    }
};