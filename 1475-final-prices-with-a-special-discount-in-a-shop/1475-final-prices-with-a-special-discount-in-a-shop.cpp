class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        int n = prices.size();
        vector<int> ans(prices.size());
        for(int i = n - 1; i >= 0;i --){
            while(!st.empty() && st.top() > prices[i]){
                st.pop();
            }

            int d = st.empty() ? 0 : st.top();

            ans[i] = prices[i] - d;
            st.push(prices[i]);
        }
        return ans;
    }
};