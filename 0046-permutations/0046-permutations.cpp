class Solution {
public:

    void solve(vector<vector<int>> & ans,vector<int> & nums, int st){
        if(st == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j = st; j < nums.size(); j ++){
            swap(nums[st], nums[j]);
            solve(ans, nums, st + 1);
            swap(nums[st], nums[j]);
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;        
        solve(ans, nums, 0);
        return ans;
    }
};