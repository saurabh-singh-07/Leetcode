class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& arr) {
        vector<int> freq(101, 0);
        vector<int> ans;

        for(int i : arr) freq[i] ++;

        for(int i = 1; i < 100; i ++){
            freq[i] += freq[i - 1];
        }

        for(int i : arr){
            if(i == 0) ans.push_back(0);
            else ans.push_back(freq[i - 1]);
        }
        return ans;
    }
};