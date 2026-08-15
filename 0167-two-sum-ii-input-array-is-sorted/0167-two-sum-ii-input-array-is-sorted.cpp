class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int st = 0;
        int en = n.size() -1;

        while(st < en){
            if( n[st] + n[en] == target) return {st + 1 , en + 1};
            else if (n[st] + n[en] <= target) st++;
            else en--;
        }
        return {};
    }
};