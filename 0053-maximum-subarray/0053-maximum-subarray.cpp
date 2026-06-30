class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int currSum = 0;
       int sum = nums[0];

       for(int i = 0; i < nums.size(); i ++){
        currSum += nums[i];
        sum = max(sum , currSum);
        if(currSum < 0){
            currSum = 0;
        }
        
       }
       return sum ;
    }
};