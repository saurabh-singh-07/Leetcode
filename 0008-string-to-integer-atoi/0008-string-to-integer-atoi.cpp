class Solution {
public:
    int myAtoi(string s) {
        if( s.empty()) return 0;
        int i = 0;
        const long long max = INT_MAX;
        const long long min = INT_MIN;
        while (i < s.length() && s[i] == ' '){
            i++;
        }
        if(i == s.length())return 0;
        int sign = 1;
        if(s[i] == '-'){
            sign = -1;
            i++;
        }else if(s[i] == '+'){
            sign = 1;
            i++;
        }
        long long res = 0;
        while(i < s.length() && isdigit(s[i])){
            int digit = s[i] - '0';
            res = res * 10 + digit;
            i++;
            if(sign * res <= min){
                return INT_MIN;
            }
            if(sign * res >= max){
                return INT_MAX;
            }
        }
        return sign * res;
    }
};