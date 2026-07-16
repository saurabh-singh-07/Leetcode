class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<long long> prefixGcd(nums.size());
        int mx = INT_MIN;
        for(long long i = 0; i < nums.size(); i ++){
            mx = max(mx, nums[i]);
            long long num = gcd(mx, nums[i]);
            prefixGcd[i] = num;
        }

        sort(prefixGcd.begin(), prefixGcd.end());
        long long st = 0;
        long long  en = prefixGcd.size() -1;
        long long sum = 0;
        while(st < en){
            sum += gcd(prefixGcd[st], prefixGcd[en]);
            st++;
            en--;
        }
        return sum;
    }
};