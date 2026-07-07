class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> prefix(n);

        prefix[0] = arr[0];
        for(int i = 1; i < n; i ++){
            prefix[i] = prefix[i - 1] ^ arr[i];
        }

        vector<int> ans(queries.size());
        for(int k = 0; k < queries.size(); k ++){
            int i = queries[k][0];
            int j = queries[k][1];

            if(i == 0){
                ans[k] = prefix[j];
            }else{
                ans[k] = prefix[j] ^ prefix[i - 1];
            }
        }
        return ans;
    }
};