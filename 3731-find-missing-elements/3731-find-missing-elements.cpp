class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<int> mp;
        vector<int> ans;
        for(int i : nums){
            mp.insert(i);
        }
        for(int i = nums[0] + 1; i < nums[nums.size() - 1]; i++){
            if(mp.find(i) == mp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};