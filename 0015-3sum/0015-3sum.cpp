class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        for(int i = 0; i< nums.size()-2 ; i ++){
            int st = i +1;
            int en = nums.size() -1;
            while(st < en){
                int sum = nums[i] + nums[st] + nums[en];
                if(sum == 0){
                    ans.push_back({nums[i], nums[st], nums[en]});
                    st ++;
                    en --;
                }
                else if(sum > 0){
                    en --;
                }else st ++;
            }
        }
        return ans;
    }
};