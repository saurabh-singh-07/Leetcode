class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 2;
        if(nums.size() <= 2){
            return nums.size();
        }
        int i = 0;
        while(i < nums.size()-1){
            int a = nums[i];
            int b = nums[i + 1];
            int len = 2;
            int c = i + 2;
            while(c < nums.size() && nums[c] == a + b){
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