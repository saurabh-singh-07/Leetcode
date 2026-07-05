class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int>mp;
        mp[0] = 1;
        int sum = 0;
        int count = 0;
        for(int i : nums){
            sum += i;

            int target = sum - goal;

            if(mp.find(target) != mp.end()){
                count += mp[target];
            }
            mp[sum] ++;
        }
        return count;
    }
};