class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2){
            return n;
        }
        int ans = 2;
        int i = 0;

        while(i < n-1){
            int a = nums[i];
            int b = nums[i + 1];
            int len = 2;
            int c = i + 2;
            while(c < n && nums[c] == a + b){
                len ++;
                a = b;
                b = nums[c];
                c++;
            }
            ans = max(len, ans);
            i ++;
        }
        return ans;
        
    }
};