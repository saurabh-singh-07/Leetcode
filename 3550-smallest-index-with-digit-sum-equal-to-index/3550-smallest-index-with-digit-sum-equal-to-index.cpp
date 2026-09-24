class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i ++){
            int num = nums[i];
            while(num > 0){
                int digit = num % 10;
                num /= 10;
                sum += digit;
            }

            if(sum == i) return i;
            else sum = 0;
        }
        return -1;
    }
};