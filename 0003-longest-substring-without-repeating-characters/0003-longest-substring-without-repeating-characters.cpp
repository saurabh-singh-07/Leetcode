class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0;
        unordered_set<char> mp;
        int maxCount = 0;
       
       for(int right = 0;right < s.length(); right ++){
        while(mp.find(s[right]) != mp.end()){
            mp.erase(s[left]);
            left ++;
        }
        mp.insert(s[right]);
        maxCount = max(maxCount, right - left + 1);
       }
       return maxCount;
    }
};