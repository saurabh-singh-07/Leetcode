class Solution {
public:
    int minAddToMakeValid(string s) {
        int i = 0, j =0;
        for(char ch : s){
            if(ch == '('){
                i++;
            }else{
                if(i > 0) i--;
                else j++;
            }
        }
        return j + i;
    }
};