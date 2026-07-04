class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        int prefix = 0;
        int count = 0;
        mp[0] = 1;
         for(int i : nums){
            prefix += i;
            int mod = prefix % k;

            if(mod < 0){
                mod += k;
            }

            if(mp.find(mod) != mp.end()){
                count += mp[mod];
                mp[mod] += 1;
            }else{
                mp[mod] = 1;
            }
         }
         return count ;
    }
};