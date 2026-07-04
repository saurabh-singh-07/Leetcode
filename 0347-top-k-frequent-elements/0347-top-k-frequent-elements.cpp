class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        vector<int>ans;
        for(int i = 0; i < nums.size(); i ++){
            mp[nums[i]]++;
        }
        vector<vector<int>>freq(nums.size() + 1);
        for(auto& it: mp) freq[it.second].push_back(it.first);
        for(int i = freq.size() - 1; i >= 0;i --){
            for(auto it: freq[i]){
                ans.push_back(it);
                if(ans.size() == k){
                    return ans;
                }
            }
        }
        return ans;
    }
};