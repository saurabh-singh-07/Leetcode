class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        int currentSequence = 1;
        int maxSequence = 0;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < n; i ++){
            if(nums[i] != nums[i - 1]){
                if(nums[i] == nums[i - 1] + 1){
                    currentSequence ++;
                }else{
                    maxSequence = max(maxSequence, currentSequence);
                    currentSequence = 1;
                }
            }
        }
        return max(maxSequence, currentSequence);
    }
};