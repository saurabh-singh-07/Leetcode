class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = 0;
        int maxi = 0;
        if(nums.size() == 1) return 1;
        for(int i = 0; i < nums.size(); i ++){
            if(nums[i] < nums[mini]) mini = i;
            if(nums[i] > nums[maxi]) maxi = i;
        }
        if(mini > maxi){
            swap(mini, maxi);
        }
       int n = nums.size();
        return min(((n - maxi) + min(mini + 1, maxi - mini)),((mini + 1) + min(n - maxi, (maxi - mini))));
    }
};