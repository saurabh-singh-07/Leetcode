class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = nums1[0];
        bool odd = false;
        for(int i : nums1){
            mini = min(mini, i);
            if(i % 2 == 1) odd = true;
        }

        if(mini % 2 == 1){
            return true;
        }
        return !odd;
    }
};