class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int ,int > mp;

        int prefix = 0;
        int maxlen = 0;

        mp[0] = -1;
        for(int i = 0; i < nums.size(); i ++){
            if(nums[i] == 0){
                prefix -= 1;
            }else{
                prefix += 1;
            }

            if(mp.count(prefix)){
                maxlen = max(maxlen, i - mp[prefix]);
            }else{
                mp[prefix] = i;
            }
        }
        return maxlen;
    }
};