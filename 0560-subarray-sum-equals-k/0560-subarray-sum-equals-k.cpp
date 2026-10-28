class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum = 0;
        int  j = 0;
        mp[sum] ++;
        for(int i = 0; i< nums.size(); i++){
            sum += nums[i];
            int target = sum - k;
            if(mp.find(target) != mp.end()){
                j += mp[target];
            }
            mp[sum]++;
        }
        return j;
    }
};