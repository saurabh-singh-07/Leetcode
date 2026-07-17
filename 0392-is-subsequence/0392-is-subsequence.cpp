class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while(i < t.length() && j < s.size()){
            if(s[j] == t[i]){
                j++;
            }
            i++;
        }

        return s.length() == j;
    }
};