class Solution {
public:
    string convert(string s, int numsRows) {
       if(numsRows == 1 || numsRows == s.length()) return s;

       vector<vector<int>>rows(numsRows);
        int idx = 0, d = 0;
       for(char c : s){
        rows[idx].push_back(c);
        if(idx == 0) d = 1;
        else if(idx == numsRows - 1) d = -1;
        idx += d;
       }

       string result="";

       for(auto & row : rows){
        for(char ch : row){
            result += ch;
        }
       }
       return result;
    }
};