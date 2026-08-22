class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        for(int i = n -1; i >=0;i --)
            st.push(nums[i]);

        for(int i = n -1; i >=0; i --){
            while(!st.empty() && st.top() <= nums[i] )
                st.pop();
            int temp = nums[i];
            !st.empty() ? nums[i] = st.top() : nums[i] = -1;
            st.push(temp);
        }
        return nums;
    }
};