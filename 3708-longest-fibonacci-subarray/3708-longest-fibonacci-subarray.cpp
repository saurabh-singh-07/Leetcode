class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2) return n;

        int ans = 2;
        int i = 0;
        
        while(i < n-1){
            int prev = nums[i];
            int curr = nums[i+1];
            int len = 2;
            int next = i+2;

            while(next < n && nums[next] == prev+curr){
                len++;
                prev = curr;
                curr=nums[next];
                next++;
            }
            ans = max(ans, len);
            i++;
        }
        return ans;
    }
};