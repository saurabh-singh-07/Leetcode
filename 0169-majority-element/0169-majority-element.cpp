class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem = nums[0];
        int count = 1;

        for(int i = 1; i < nums.size(); i ++){
            if(count == 0){
                elem = nums[i];
            }
            if(elem == nums[i]){
                count ++;
            }
            else if(elem != nums[i]){
                count --;
            }
        }
        return elem;
    }
};