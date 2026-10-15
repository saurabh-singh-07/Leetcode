class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& arr) {
        vector<int>ans (arr.size(), 0);
        for(int i = 0; i < arr.size(); i ++){
            int candi = arr[i];
            int count = 0;
            for(int j = 0; j < arr.size(); j ++){
                if(candi > arr[j]) count ++;
            }
            ans[i] = count;
        }
        return ans;
    }
};