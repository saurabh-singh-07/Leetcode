class Solution {
public:
    bool checkPrime(int n){
        if(n < 2) return false;
        for(int i =2; i * i <= n;i++){
            if(n % i == 0) return false;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int maxi = 0;
        int n = nums.size();
        for(int i = 0 ; i< n; i ++){
            if(checkPrime(nums[i][i])){
                maxi = max(maxi, nums[i][i]);
            }
            if(checkPrime(nums[i][n-1-i])){
                maxi = max(maxi, nums[i][n - 1 - i]);
            }
        }
        return maxi;
    }
};