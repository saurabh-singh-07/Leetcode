class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char , int> mp;
        for(char ch : s){
            mp[ch] ++;
        }

        for(int i = 0; i < t.length(); i ++){
            if(mp.find(t[i]) != mp.end() && mp[t[i]] > 0){
                mp[t[i]]--;
            }else{
                return t[i];
            }
        }
        return '0';
    }
};