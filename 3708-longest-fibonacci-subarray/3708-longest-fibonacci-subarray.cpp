class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int a = 0, b = 1;
        
        int maxlen = 2;
        int len = 2;
        if(nums.size() <= 2){
            return nums.size();
        }
        while(b + 1 < nums.size()){
            if(nums[a] + nums[b] == nums[b + 1]){
                len++;
                maxlen = max(len, maxlen);
            }else{
                maxlen = max(len, maxlen);
                len = 2;
            }
            a ++; b ++;
        }
        return maxlen;
        
    }
};