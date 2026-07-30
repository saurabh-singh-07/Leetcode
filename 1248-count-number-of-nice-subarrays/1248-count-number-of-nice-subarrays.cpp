class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int &i : nums){
            i %= 2;
        }
        vector<int>prefixCount (nums.size() + 1);
        prefixCount[0] = 1;

        int sum = 0,ans = 0;

        for(int i : nums){
            sum += i;
            ans += (sum >= k) ? prefixCount [sum - k] : 0;
            prefixCount[sum] ++;

        }
        return ans;
    }
};