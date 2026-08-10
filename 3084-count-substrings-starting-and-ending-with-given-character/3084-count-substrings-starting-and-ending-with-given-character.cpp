class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count = 0;
        for(auto ch : s){
            if(ch == c){
                count += 1;
            }
        }
        return count * (count + 1)/2;
    }
};