class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int j = 0, k = 0;
        for(int i = 0; i < s.size(); i ++){
            if(s[i] == '#'){
                k--;
                k = max(0,k);
            }else{
                s[k++] = s[i];
            }
        }
        for(int i = 0; i < t.size(); i ++){
            if(t[i] == '#'){
                j --;
                j = max(0,j);
            }else
            t[j++] = t[i];
        }
        if(k != j) return false;
        else{ 
        for(int i = 0; i < k; i ++){
            if(s[i] != t[i]) return false;
        }
        }
        return true;
    }
};