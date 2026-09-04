class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sufix(n, 0);

        int mini = INT_MAX;

        for(int i = n -1; i >= 0;i --){
            mini = min(mini, nums[i]);
            sufix[i] = mini;
        }
        int maxi = 0;
        for(int i = 0; i < n; i ++){
            maxi = max(maxi, nums[i]);

            if(maxi - sufix[i] <= k) return i;
        }
        return -1;
    }
};