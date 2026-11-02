class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        priority_queue <pair<int,int>> pq;
        for(int i : nums) mp[i]++;
        for(auto & it : mp){
            pq.push({it.second, it.first});
        }

        while(!pq.empty() && k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};