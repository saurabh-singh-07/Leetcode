class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i< nums.size()-2 ; i ++){
            int st = i +1;
            int en = nums.size() -1;

            while(st < en){
                int sum = nums[i] + nums[st] + nums[en];
                if(sum == 0){
                    ans.push_back({nums[i], nums[st], nums[en]});
                    st ++;
                    en --;
                    while(st < en && nums[st -1] == nums[st]) st ++;
                     while(st < en && nums[en] == nums[en + 1]) en --;
               }
                else if(sum > 0){
                    en --;
                }else st ++;
            }
            while(i + 1 <nums.size() && nums[i] == nums[i + 1]) i ++;
        }
        return ans;
    }
};