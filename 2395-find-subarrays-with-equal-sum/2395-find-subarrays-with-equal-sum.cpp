class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int, int>mp;
        int sum = 0;
        for(int i = 1; i < nums.size(); i ++){
            sum = nums[i] + nums[i - 1];

            if(mp.find(sum) != mp.end()){
                return true;
            }
            mp[sum]++;
        }
        return false;
    }
};