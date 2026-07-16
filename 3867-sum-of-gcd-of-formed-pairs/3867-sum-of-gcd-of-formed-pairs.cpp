class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        
        int maxi = 0;
        for(int& i : nums){
            maxi = max(maxi, i);
            i = gcd(maxi, i);
        }
        sort(nums.begin(), nums.end());

        long long res =0;
        for(int i =0, j = nums.size() - 1; i < j; i ++, j --){
            res += gcd(nums[i], nums[j]);
        }
        return res;
    }
};