class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int count = 0;
        for(char c : s){
            if(c == '(') count ++;
            ans = max(ans, count);
            if (c == ')') count --;
        }
        return ans;
    }
};  