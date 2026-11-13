class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int target = 1;
        sort(nums.begin(), nums.end());
        for(int i : nums){
            if(target == i) target ++;
            else if (target < i) return target;
        }
        return target;
    }
};